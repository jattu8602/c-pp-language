/*
basic example 

*/
#include<iostream>
using namespace std;

int main(){
    int a =4;
    int *ptr = &a;
    cout<<"the value of a is :"<<*(ptr) <<endl;
    

    //new keyword
    int* p = new int (40);
    float* p = new float (40.23);
    cout<<"the value at adess p is :"<<*(ptr)<<endl;
    int* arr = new int[3];
    arr[0] = 10;
    *(arr+1) = 23;
    arr[3]=45;
    delete arr;
    cout<<"the value of arr[0]"<<arr[0]<<endl;
    cout<<"the value of arr[1]"<<arr[2]<<endl;
    cout<<"the value of arr[3]"<<arr[3]<<endl;

    //delete operator




    

    return 0;
}