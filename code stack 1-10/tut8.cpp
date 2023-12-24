#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    int a = 34;
    char c = 'c';
    cout<<"the value of a was:"<<a<<endl;
    cout<<"the value of c was:"<<c<<endl;
    a = 45;
    c = 'd';
    cout<<"the value of a is:"<<a<<endl;
    cout<<"the value of c is:"<<c<<endl;

    //CONSTANT IN C++
    const int x = 3;
    cout<<"the value of x was:"<<x<<endl;
    //x = 45; // you will get an error because a is a constant
    cout<<"the value of x is:"<<x<<endl;

    //******MANUPULTORS IN C++****************
    int h = 3, b = 45, g = 1234;
    cout<<"the value of h without setw is:"<<h<<endl;
    cout<<"the value of b without setw is:"<<b<<endl;
    cout<<"the value of g without setw is:"<<g<<endl;

    cout<<"the value of h is:"<<setw(4)<<h<<endl;
    cout<<"the value of b is:"<<setw(4)<<b<<endl;
    cout<<"the value of g is:"<<setw(4)<<g<<endl;


    // *************OPERATOR PRECEDENCE******************
    int p = 3, q = 4;
    int y = ((((p*5)+q)-45)+98);
    cout<<c<<endl;



    return 0;

}