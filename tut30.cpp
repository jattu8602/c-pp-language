//constructors
#include<iostream>
using namespace std;
class complex
{
    
    int a, b;

public:
    complex(int , int ); // constructor declarition

    void printnumber()
    {
        cout << "your number is :" << a << " + " << b << "i" << endl;
    }

};
complex ::complex(int x,int y)//this is a parameterised constructor a it takes no parameters
{ // this is a default constructor
    a = x;
    b = y;
    // cout << "hello world" << endl;
}

int main(){
    //implicit call

    complex a(4,6);
    //explicit call
    complex b = complex(5,7);

    a.printnumber();
    b.printnumber();

    
    return 0;
}