#include <iostream>
using namespace std;
 
int main()
{
    char button;
    cout<<"Enter a character: "; 
    cin>>button;

    switch(button){
    case 'a':
        cout<<"Hello"<<endl;
        break;

    case 'b':
        cout<<"Namaste"<<endl;
        break;

    case 'c':
        cout<<"Hola"<<endl;
        break;

     case 'd':
        cout<<"Salut"<<endl;
        break;

    case 'e':
        cout<<"Ciao"<<endl;
        break;

        default:
        cout<<"I am still Learning";
        break;
    }

    return 0;
}
 
