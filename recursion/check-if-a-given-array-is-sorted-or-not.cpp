//check if an array is sorted or not
#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    if(n==1){
        return 1;
    }
    bool restArray=sorted(arr+1,n-1);
    return(arr[0]<arr[1] && restArray);//Return true if first element is less than 2nd element and the restarray is truei.e. the
                                        //restarray is sorted 
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<sorted(arr,n)<<endl;
    return 0;
}
