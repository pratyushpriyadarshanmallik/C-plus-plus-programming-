#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter 3 sides:";
    cin>>a>>b>>c;
    if(a==b && b==c){
        cout<<"Equilateral triangle"<<endl;
    }else if(a==b || b==c || c==a){
        cout<<"Isosceles triangle"<<endl;
    }else{
        cout<<"Scalene triangle"<<endl;
    }
    return 0;
}
