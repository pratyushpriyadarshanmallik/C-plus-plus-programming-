#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    int prevfact=fact(n-1);
    return n*prevfact; //Or we can also write that return n*fact(n-1)
}
int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
