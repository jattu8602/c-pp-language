#include<iostream>
using namespace std;

int main(){
    //************POINTER*******************
    // what is pointer?
    // pointer is a data type which holds the adress of otherdata types

    int a = 3;
    int *b = &a;
    // &---->ADRESS OF OPERATOR
    cout<<"the adress of a is "<<&a<<endl;
    cout<<"the adress of a is "<<b<<endl;
    //* ----->DEREFERENCE OPERATOR
    cout<<"the value at adress b is "<<*b<<endl;

    
    //pionter to pointer
    int**c = &b;
    cout<<"the adress of b is"<<&b<<endl;
    cout<<"the adress of b is "<<c<<endl;
    cout<<"the value at adress c is "<<*c<<endl;
    cout<<"the value at adress value_at(value_at(c)) is: "<<**c<<endl;




    return 0;
}