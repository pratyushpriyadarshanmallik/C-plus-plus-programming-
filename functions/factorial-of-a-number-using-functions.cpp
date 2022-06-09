#include<iostream>
using namespace std;
void fact(int n){
    int factorial =1;
    for(int i=2;i<=n;i++){
        factorial=factorial*i;
    }
    cout<<"Factorial is:"<<factorial;
}
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    fact(n);
    return 0;
}
