#include<iostream>
using namespace std;
void rectangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void hollowRectangle(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            if(i==1||i==n||j==n-1||j==1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void invertedPyramid(int n){
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void hafpyramidafter180(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}
void halfpyramidusingnumbers(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}
void Floydstriangle(int n){
    int count =1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    rectangle(n);
    cout<<endl;
    hollowRectangle(n);
    cout<<endl;
    invertedPyramid(n);
    cout<<endl;
    hafpyramidafter180(n);
    cout<<endl;
    halfpyramidusingnumbers(n);
    cout<<endl;
    Floydstriangle(n);
}
