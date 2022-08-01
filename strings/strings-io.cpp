#include<iostream>
#include<string>
using namespace std;
int main(){
    //declaration of string 
    //1st method
    string str;
    cin>>str;
    cout<<str<<endl;

    //2nd method
    string str1(5 ,'n');
    cout<<str1<<endl;

    //3rd method
    string str2="lorelipsum";
    cout<<str2<<endl;

    //4th method(taking inpput with spaces )
    string str4;
    getline(cin,str4);
    cout<<str4<<endl;

    return 0;
}
