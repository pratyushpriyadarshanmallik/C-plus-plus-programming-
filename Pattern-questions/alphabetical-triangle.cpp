#include<iostream>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=1;i<=n;i++){
        int spaces = n-i;
        for(int k=0;k<spaces;k++){
            cout<<" ";
        }
        int no_of_char = (2*i)-1;
        for(int j=0;j<no_of_char;j++){
            cout<<char('A'+j);
        }
        cout<<endl;
    }
    return 0;
}
