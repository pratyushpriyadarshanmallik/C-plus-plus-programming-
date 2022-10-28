#include<iostream>
using namespace std;
bool isSafe(int** arr,int x,int y,int n){ //To check if our rat can go in that block or not 
    if(x<n&&y<n&&arr[x][y]==1){
        return true;
    }
    return false;
}
bool ratinMaze(int**arr,int x,int y,int n,int**solArr){
    if(x==n-1&& y==n-1){
        solArr[x][y]=1;
        return true;
    }
    if(isSafe(arr,x,y,n)){ /*if the maze we want to move is safe then only we will move*/
        solArr[x][y]=1;
        if(ratinMaze(arr,x+1,y,n,solArr)){/*We will check if we can move rightward or not if it gives us true we will return true*/
            return true;
        }if(ratinMaze(arr,x,y++1,n,solArr)){/*If we cant move rightward then now we will check if we can move downward or not if we can move downward we will return true*/
            return true;
        }
        solArr[x][y]=0; //Backtracking-->Suppose we dont get true in both the cases i.e neither by moving rightward nor by moving downward. So now we will backtrack mark the element as zero and return false*/
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i];
        }
    }
    int**solArr=new int*[n];
    for(int i=0;i<n;i++){
        solArr[i]=new int[n];
        for(int j=0;j<n;j++){
            cout<<solArr[i][j];
        }
        cout<<endl;
    }
    return 0;
}
