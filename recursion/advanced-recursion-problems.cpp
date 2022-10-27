#include<iostream>
using namespace std;
//Print all possible permutations of a string 
void permutations(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros =s.substr(0,i)/*element before ith element*/+s.substr(i+1)/*element after ith element */;
        permutations(ros,ans+ch);
    }
}
int main(){
    permutations("ABC","");
}
