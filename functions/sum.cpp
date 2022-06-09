#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}
int main(){
    int a=12;
    int b=13;
    cout<<add(a,b)<<endl;
    return 0;
}
