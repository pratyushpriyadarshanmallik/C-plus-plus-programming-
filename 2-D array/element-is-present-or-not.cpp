#include<iostream>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;

    bool flag=false;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==x){
                cout<<i<<" "<<j<<endl;
                flag =true;
            }
        }
    }

    if(flag){
        cout<<"Element is found\n";
    }else{
        cout<<"Element is not found \n";
    }
    return 0;
}
