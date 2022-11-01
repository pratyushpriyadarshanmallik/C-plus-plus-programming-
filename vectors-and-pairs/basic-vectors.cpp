#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);
    //Printing vector using loops
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";//123
    }
    cout<<endl;

    //Printing vectors using iterators
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";//123
    }
    cout<<endl;

    //Printing vectors using auto keyword
    for(auto element:v){
        cout<<element<<" ";//123
    }
    cout<<endl;

    //Pop the last element from the vector
    v.pop_back();
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    vector<int> v2 (3,50); //Declaration
    
    //Printing v2 using loop 
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    
    //Printing v2 using iterator
    vector<int> ::iterator itt;
    for(itt=v2.begin();itt!=v2.end();itt++){
        cout<<*itt<<" ";
    }
    cout<<endl;

    //Swap function
    swap(v,v2);
    for(auto element :v){
        cout<<element<<" ";
    }
    cout<<endl;

    for(auto element :v2){
        cout<<element<<" ";
    }
    cout<<endl;
    
    //Sorting function
    //sort(v.begin(),v.end());
    for(auto element :v){
        cout<<element<<" ";
    }
    cout<<endl;
    
    return 0;
}
