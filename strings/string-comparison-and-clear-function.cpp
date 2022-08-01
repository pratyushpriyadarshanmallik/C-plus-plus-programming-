#include<iostream>
#include<string>
using namespace std;
int main(){
    //clear function
    string str= "LOrel ipsu,m aysuagfsa8uwelofghudufds";
    str.clear();
    cout<<str;

    //compare between two strings
    string s1="abc";
    string s2="abc";
    cout<<s2.compare(s1)<<endl; //+ve-->s2>s1::=-->s2=s1::-ve-->s2<s1
    if(s2.compare(s1) == 0){
        cout<<"strings are equal";
    }
    return 0;
