#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p;
    p=&a;

    cout<<*p<<endl;
    int**q=&p;

    cout<<*q<<endl;//1-time dereferance so its printing the address of p;)
    cout<<**q<<endl;//2-time dereferance so its printing the value of a;)

    return 0;
}
