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
}
