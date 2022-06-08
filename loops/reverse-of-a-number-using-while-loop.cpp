#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int reverse=0;
    while(n>0){
        int lastnumber=n%10;
        reverse=reverse*10 + lastnumber;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}
