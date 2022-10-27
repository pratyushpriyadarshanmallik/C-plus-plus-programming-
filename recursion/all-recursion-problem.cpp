#include<iostream>
using namespace std;
//Reverse a given string using recursion 
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}
//Replace pi with 3.14 in a string
void replaePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0]=='p'&& s[1]=='i'){
        cout<<"3.14";
        replaePi(s.substr(2));
    }else{
        cout<<s[0];
        replaePi(s.substr(1));
    }
} 
//Tower Of Hanoi
void towerofHanoi(int n,char src,char dest,char helper){
    if(n==0){
        return;
    }
    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move from"<<src<<"to"<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}
//Remove duplicates from a string 
string removeDup(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=removeDup(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
//Move all x to the end of the string
string moveallX(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=moveallX(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }else{
        return ch+ans;
    }
}
//Generate all substrings of a string 
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch=s[0];
    string ros=s.substr(1);
    subseq(ros,ans);
    subseq(ros,ans+ch);
}
//Generate sbstring with ascii number 
void subseqASCII(string s,string ans){
    if(s.length==0){
        cout<<ans<<" ";
    }
    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);
    subseqASCII(ros,ans);
    subseqASCII(ros,ans+ch);
    subseqASCII(ros,ans+to_string(code));
}
//Print all possible words from phone digits 
string keypadArr[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<" ";
        return;
    }
    char ch=s[0];
    string code=keypadArr[ch-'0'];
    string ros=s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main(){
    reverse("binod");
    cout<<endl;
    replaePi("pippxxppiixipi");
    cout<<endl;
    towerofHanoi(6,'A','C','B');
    cout<<endl;
    cout<<removeDup("aaaabbbeeecddd");
    cout<<endl;
    cout<<moveallX("xabxaxbac");
    cout<<endl;
    subseq("ABC","");
    cout<<endl;
    subseqASCII("ABC","");
    cout<<endl;
    keypad("23","")
}
