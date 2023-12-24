// constructors and destructors
#include <iostream>
using namespace std;
class complex
{
    // creating a constructor
    //  constructor is a special member function with same name as of the class.
    //  it is used to initialize the object of its class;
    // it is automatically invoked whenever an object is created
    int a, b;

public:
    complex(void); // constructor declarition

    void printnumber()
    {
        cout << "your number is :" << a << " + " << b << "i" << endl;
    }
};

complex ::complex(void)//this is a default constructor as it accepts no parameters
{ // this is a default constructor
    a = 10;
    b = 0;
    cout << "hello world" << endl;
}

int main()
{
    complex c;
    c.printnumber();

    return 0;
}
// propertie of constructor------------------->
// it should be declared in the public section of the class .
// they are automatically invoked whenever the object is created.
// they cannot return values and do not have return types.
// it can have default arguments.
// we cannot refeer to their adress.
