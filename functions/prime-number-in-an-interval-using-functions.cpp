#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b;
    cout<<"Enter two numbers: "
    cin>>a>>b;

    for(int i=a;i<=b;i++){
        if(isPrime(i)==true){
        cout<<i<<endl;
        }
    }
    return 0;
}
