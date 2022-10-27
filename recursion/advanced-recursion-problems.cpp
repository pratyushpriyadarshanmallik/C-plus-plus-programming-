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
int main(){
    permutations("ABC","");
    cout<<endl;
    cout<<countpath(0,3);
}
