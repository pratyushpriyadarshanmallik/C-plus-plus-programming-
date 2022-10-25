//Recursion-->When a function call itself to make the problem smaller 
#include<iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;    //Base condition 
    }
    int prevsum=sum(n-1);   
    return prevsum+n;
}
int main(){
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
