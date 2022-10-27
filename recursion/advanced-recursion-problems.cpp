#include<iostream>
using namespace std;
//Print allpossible permutations of a string 
void permutations(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros =s.substr(0,i)/*element before ith element*/+s.substr(i+1)/*element after ith element */;
        permutations(ros,ans+ch);
    }
}
//Count the number of pahs possible from start point to end point in gameboard 
int countpath(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count=count+countpath(s+i,e);
    }
    return count;
}
//Count the number of paths possible in a maze
int countPathMaze(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>n || j>n){
        return 0;
    }
    return countPathMaze(n,i+1,j) + countPathMaze(n,i,j+1);
}
int main(){
    permutations("ABC","");
    cout<<endl;
    cout<<countpath(0,3);
    cout<<endl;
    cout<<countPathMaze(3,0,0);
}
