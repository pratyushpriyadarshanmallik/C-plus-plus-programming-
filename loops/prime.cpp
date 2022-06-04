#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i;
   
    for(i=2;i<n-1;i++){
        if(n%i==0){
            cout<<"Non  Prime"<<endl;
            break;
        }else{
            cout<<"Prime"<<endl;
            break;
        }

    }
    cout<<"Thank you"<<endl;
    
    return 0;
}
