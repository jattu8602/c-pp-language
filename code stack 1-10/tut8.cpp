#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    // int a = 34;
    // char c = 'c';
    // cout<<"the value of a was:"<<a<<endl;
    // cout<<"the value of a was:"<<c<<endl;
    // a = 45;
    // c = '7895';
    // cout<<"the value of a is:"<<a<<endl;
    // cout<<"the value of a is:"<<c<<endl;

    // CONSTANT IN C++
    // const int a = 3;
    // cout<<"the value of a was:"<<a<<endl;
    // a = 45; // you will get an error because a is a constant
    // cout<<"the value of a is:"<<a<<endl;

    //******MANUPULTORS IN C++****************
    // int a = 3, b = 45, c = 1234;
    // cout<<"the value of a without setw is:"<<a<<endl;
    // cout<<"the value of b without setw is:"<<b<<endl;
    // cout<<"the value of c without setw is:"<<c<<endl;

    // cout<<"the value of a is:"<<setw(4)<<a<<endl;
    // cout<<"the value of b is:"<<setw(4)<<b<<endl;
    // cout<<"the value of c is:"<<setw(4)<<c<<endl;


    // *************OPERATOR PRECEDENCE******************
    int a = 3, b = 4;
    int c = ((((a*5)+b)-45)+98);
    cout<<c<<endl;



    return 0;

}