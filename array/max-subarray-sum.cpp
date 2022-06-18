#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxSum=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
             int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum;
    return 0;
}
