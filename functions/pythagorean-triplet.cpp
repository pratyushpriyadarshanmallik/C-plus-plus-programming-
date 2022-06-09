#include<iostream>
using namespace std;
void check(int x,int y,int z){
    int a=max(x,max(y,z));
    int b,c;
    if(a==x){
        b=y;
        c=z;
    }else if(a==y){
        b=x;
        c=z;
    }else{
        b=x;
        c=y;
    }

    if(a*a==b*b+c*c){
        cout<<"Pythagorean triplet"<<endl;
    }else{
        cout<<"Non-pythagorean triplet"<<endl;
    }
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    check(x,y,z);

    return 0;
}
