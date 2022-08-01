#include<iostream>
#include<string>
using namespace std;
int main(){  
    //numeric string to integer function
    string s2="2682";
    int x =stoi(s2);
    cout<<x+2<<endl;

    //integer to string
    int y=2893;
    cout<<to_string(y)+ "2"<<endl;

    return 0;
}
