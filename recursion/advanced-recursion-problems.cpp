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
//Tiling Problem
int tilingways(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return tilingways(n-1) + tilingways(n-2);
}
//Friend's Pairing problem
int friendspairing(int n){
    if(n==0|| n==1 || n==2){
        return n;
    }
    return friendspairing(n-1) + friendspairing(n-2)*(n-1);
}
//0-1 knapsack problem
int knapsack(int value[],int wt[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W){
        return knapsack(value,wt,n-1,W);/*When weight of the nth element is more than the weight limit we will not include it*/
    }
    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1]/*When we include nth item */,knapsack(value,wt,n-1,W)/*When we dont include nth item*/);
}
int main(){
    permutations("ABC","");
    cout<<endl;
    cout<<countpath(0,3);
    cout<<endl;
    cout<<countPathMaze(3,0,0);
    cout<<endl;
    cout<<tilingways(4);
    cout<<endl;
    cout<<friendspairing(4);
    cout<<endl;
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;
    cout<<knapsack(value,wt,3,W);
}  
