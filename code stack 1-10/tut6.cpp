
// there are two types of header files:
// 1.> systum headerfile : it comes with the compiler.
#include<iostream>
// 2.>user defined headerfiles : it is written by the programmer.
//#include"this.h"//this will produce error if this.h file is not present in systum directory
// #include"this.h"
//we can search online for headerfiles
#include<math.h>


using namespace std;
int main(){
    int a = 4, b = 5;

    cout<<"this is hello world program.\n";
    cout<<"operators in c++:"<<endl;
    cout<<"following are the types of operators in c++:"<<endl;
    //arithmetic operators
    cout<<"these are arithmetic operators in c++"<<endl;

    cout<<"the value of a + b is:"<< a + b <<endl;
    cout<<"the value of a - b is:"<< a - b <<endl;
    cout<<"the value of a * b is:"<< a * b <<endl;
    cout<<"the value of a / b is:"<< a / b <<endl;
    cout<<"the value of a % b is:"<< a%b <<endl;
    cout<<"the value of a++ is:"<< a++ <<endl;
    cout<<"the value of ++a is:"<< ++a <<endl;
    cout<<"the value of a-- is:"<< a-- <<endl;
    cout<<"the value of --a is:"<< --a <<endl;
    cout<<endl;

    //ASSIGNMENT OPERATORS---> used to assign values to variables
    int x = 4, y = 5;
    char z = z;

    //COMPARISON OPERATORS
    cout<<"FOLLOWING ARE THE COMPARISON OPERATORS IN C++"<<endl;
    cout<<"the value of a == b is: "<<(a==b)<<endl;
    cout<<"the value of a != b is: "<<(a!=b)<<endl;
    cout<<"the value of a > b is: "<<(a>b)<<endl;
    cout<<"the value of a < b is: "<<(a<b)<<endl;
    cout<<"the value of a >= b is: "<<(a>=b)<<endl;
    cout<<"the value of a <= b is: "<<(a<=b)<<endl;
    cout<<endl;

    //logical operators
    cout<<"FOLLOWING ARE THE logical OPERATORS IN C++"<<endl;
    cout<<"the value of ((a==b) && (a<b)) logical operator is: "<<((a==b) && (a<b))<<endl;
    cout<<"the value of ((a==b) || (a<b)) logical operator is: "<<((a==b) || (a<b))<<endl;
    cout<<"the value of (!(a==b)) logical operator is: "<<(!(a==b))<<endl;

    return 0;

}