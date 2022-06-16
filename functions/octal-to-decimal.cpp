#include<iostream>
using namespace std;
void octalTodecimal(int n){
    int ans=0;
    int x=1;
    while(n>0){
        int y=n%10;
        ans=ans+(x*y);
        x=x*8;
        n=n/10;
    }
    cout<<"Answer is: "<<ans;
}
int main(){
    int n;
    cout<<"Enter Octal number: ";
    cin>>n;

    octalTodecimal(n);
    return 0;
}
