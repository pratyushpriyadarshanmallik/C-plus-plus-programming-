#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any alphabet:";
    cin>>ch;

    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"Your character is vowel"<<endl;
    }else{
        cout<<"Your character is composite"<<endl;
    }
    return 0;
}
