#include<iostream>
using namespace std;
int main(){
    int a=10;//stored in stack
    int *p= new int(); //new operator allocate mwmory in heap 
    *p=10; //the p pointer will not be stored in heap rather it will be stored in stack and point to the memory address where memory is allocated to store the integer 

    delete(p); //we have to manually deallocate from heap through delete operator

    //the memory will be deallocated but the pointer will remain there.This pointer is known as dangling pointer i.e.it is pointing to a memeory location where nothing is stored

    p= new int[4]; //we can er use the pointer by by allocating new array 

    delete []p; //delete the block of memory allocate to the array
    p=NULL; //p will not point to any specific position and when we exit main function p will be automatically deleted    

    return 0;
}
