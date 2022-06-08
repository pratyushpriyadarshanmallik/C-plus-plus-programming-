#include<iostream>
using namespace std;
int main(){
    int n,rem,reverse;
    cout<<"Enter a number:";
    cin>>n;

    
    for(reverse=0;n>0;n=n/10){
        rem = n%10;
        reverse =reverse*10 + rem;
       
    }
    cout<<reverse;
    return 0;
}
