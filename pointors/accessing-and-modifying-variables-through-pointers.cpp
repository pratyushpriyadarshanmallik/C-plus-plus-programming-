//Pointers are variable that store the address of other variables
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *aptr=&a;

    cout<<*aptr<<endl;
    *aptr=20;
    cout<<a<<endl;
    return 0;
}
