#include<iostream>
using namespace std;
void binaryTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
    int y=n%10;
    ans=ans+(x*y);
    x=x*2;
    n=n/10;
    }
    cout<<"Your answer is: "<<ans;
}
int main(){
    int n;
    cout<<"Enter binary number: ";
    cin>>n;

    binaryTodecimal(n);
    return 0;
}
