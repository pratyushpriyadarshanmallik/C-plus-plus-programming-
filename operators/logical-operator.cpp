//Write a program to output whetehr a number is divisible by both 2 and 3 or divisible by only one of them 
#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;

    if(n%2==0 && n%3==0){
        cout<<"Divisible by both 2 and 3"<<endl;
    }else if(n%2==0){
        cout<<"Divisible by only 2 "<<endl;
    }else if(n%3==0){
        cout<<"Divisible by only 3"<<endl;
    }else{
        cout<<"Neither divisible by 2 nor divisible by 3"<<endl;
    }    
    return 0;
}
 
