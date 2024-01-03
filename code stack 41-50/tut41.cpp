
#include <iostream>
using namespace std;
// class derived : visibiliy-mode base1, visibility-mode base2{
//     class body of class "derived"
// };
class base1
{
protected:
    int base1int;

public:
    void get_base1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void get_base2int(int a)
    {
        base2int = a;
    }
};
class derived : public base1, public base2
{
public:
    void show()
    {
        cout << "the value of base1 is " << base1int << endl;
        cout << "the value of base2 is " << base2int << endl;
        cout << "the sum of these values is  " << base1int + base2int << endl;
    }
};
// the inherited derived class will look like this

// data members:
// base1int --->protected
// base2 int ---->protected

// member functions:
//  set_base1int()--->public
//  set_base2int()--->public
//  set_show()--->public
int main()
{
    derived jatin;
    jatin.get_base1int(3);
    jatin.get_base2int(123);
    jatin.show();

    return 0;
}