#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i=0;
    int currlength=0; 
    int maxlength=0;
    while(1){
        if(arr[i]==' ' || arr[i]=='\0'){
            if(currlength>maxlength){
                maxlength=currlength;
            }
            currlength=0;
        }else{
        currlength++;
        }
        if(arr[i]=='\0'){
            break;
        }
        i++;
    }
    cout<<maxlength<<endl;
    return 0;
}
