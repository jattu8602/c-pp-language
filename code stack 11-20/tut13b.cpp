#include<iostream>
using namespace std;

int main(){
    //c++ pointers and arrays
    int marks[5] = {34,45,6,7,23};
    
    int* p = marks;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    cout<<"the value of *p is "<<*p<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    return 0;
}