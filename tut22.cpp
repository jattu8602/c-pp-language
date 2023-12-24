#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    int read;
    
    pubilc:
    read(int);
    int chk_bin(int);


};
void binary :: read(void)
{
    cout << "enter a binary number" << endl;
    cin>>s;
}
void binary :: chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)! = '0' && s.at(i)! = '1')
        {
            cout << "incorrect binary format" << endl;
            exit(0);
        }
    }
}

int main()
{
    // oops -- Classes and objects
    // c++ ------------>initially called --->c with classes by stroustreup
    // class --------->extentions of structure (in c)
    // structures had limitations
    //       ----------->members are public
    //---------->no methods
    // classes = strutures + more
    // classes --------->can have methods and properties
    // classes -------------> can make few members as privat & few as public
    // structure in c++ are typedef
    // you can declare objects along with the class declaration
    /*class Employee{
        class decleration

    }jattu, rohan, elvish bhai*/
    // jattu.salary = 87 makes no sense if salary is private
    //  nesting of member functions
    binary b;
    b.read();
    b.chk_bin();

    return 0;
}
