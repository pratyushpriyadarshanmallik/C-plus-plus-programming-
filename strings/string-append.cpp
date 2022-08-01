#include<iostream>
#include<string>
using namespace std;
int main(){
    //append function

    //1st method
    string s1 ="fam";
    string s2 ="ily";

    s1.append(s2);
    cout<<s1<<endl;

    //2nd method
    string s3="Lorel";
    string s4="Ipsum";

    s3=s3+s4;
    cout<<s3;

    return 0;
}
