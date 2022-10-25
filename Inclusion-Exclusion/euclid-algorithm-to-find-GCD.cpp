/*Suppose we have to find gcd(greatest common divisor) of 42 and 24 so either we can find it by prime factorisation or by using 
Euclid's algorithm .IMP-->The gcd of 42 and 24 is same as gcd of (24,42-24).We will use this property in this code
we can do this iby using % in place of subtraction */
#include<iostream>
using namespace std;
int gcd(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    return 0;
}
