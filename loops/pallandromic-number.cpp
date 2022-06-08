#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int reverse=0;
    int originaln=n;

    while(n>0){
        int lastdigit=n%10;
        reverse= reverse*10 + lastdigit;
        n=n/10;
    }
    if(reverse==originaln){
        cout<<"Pallandromic Number"<<endl;
    }else{
        cout<<"Not a Pallandromic Number"<<endl;
    }
    return 0;
}
