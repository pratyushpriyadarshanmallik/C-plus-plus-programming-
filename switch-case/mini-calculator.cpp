#include <iostream>
using namespace std;
 
int main()
{
    int n1,n2;
    cout<<"Enter first number: ";
    cin>>n1;
    cout<<endl;

    cout<<"Enter Second number: ";
    cin>>n2;
    cout<<endl;

    char op;
    cout<<"Input an oprator: ";
    cin>>op;

    switch(op)
    {
        case '+':
        cout<<n1+n2<<endl;
        break;

        case '-':
        cout<<n1-n2<<endl;
        break;

        case '*':
        cout<<n1*n2<<endl;
        break;

        case '/':
        cout<<n1/n2<<endl;
        break;

        case '%':
        cout<<n1%n2<<endl;
        break;

        default:
        cout<<"I am still learning:)"<<endl;
        break;
    }

    return 0;
}
 
