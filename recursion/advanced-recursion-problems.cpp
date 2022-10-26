//Print all possible permutations of a string 
$include<iostream>
using namespace std;
void permutations (string s, string ans){
 if(s.length()==0){
 cout<<ans<<endl;
 return;
  }
for(int i=0;i<s.length ();i++){
  char ch=s[i];
