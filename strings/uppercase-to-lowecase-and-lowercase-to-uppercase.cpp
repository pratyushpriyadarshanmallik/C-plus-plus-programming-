#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){  
    string str="kshjgausdutdtgysdfgoiy";
    //convert into uppercase
    for(int i=0;i<str.length();i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
    }
    cout<<str<<endl;

    //convert into lowercase
    for(int i=0;i<str.length();i++){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    cout<<str<<endl;
    return 0;
}
