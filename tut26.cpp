#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    // below line means that non member sumComplex function is allowed to do anything with my private parts
    friend Complex sumComplex(Complex o1, Complex o2);
    void printNumber()
    {
        cout << "your number is :" << a << " + " << b << "i" << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));

    return o3;
}

int main()
{
    // friend functions
    Complex c1, c2, sum;

    c1.setNumber(1, 4);
    c2.setNumber(3, 5);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}

// properties of friend functions
/*
1. not in the scope of class
2. since it is not in the scope of the class , it cannot be called from the object of that class . c1.sumComplex() == invalid
3. can be invoked without the help of any object
4. usually coantains the objects  as arguments
5. ccan be declared inside private or public section of the clsss
6. it cannot access the members directley by the names and need object _name.member_name to access any member
*/