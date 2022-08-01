#include<iostream>
#include<string>
using namespace std;
int main(){
    //Erase function
    string s1="Lorelipsum";
    s1.erase(3,3);
    cout<<s1<<endl;

    //find function
    cout<<s1.find("or")<<endl;

    //insert function
    s1.insert(2,"lol");
    cout<<s1<<endl;

    //size or length functions
    cout<<s1.size()<<endl;
    cout<<s1.length()<<endl;

    //use of length function
    for(int i=0;i<s1.length();i++){
        cout<<s1[i]<<" "<<endl;
    }

    //substring function
    string s =s1.substr(6,4);
    cout<<s<<endl;

    return 0;
}
