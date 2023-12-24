#include<iostream>
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
// class calculator{ 
//     public:
//     int add(int a, int b){
//         return (a+b);
//     }
//     int sumComplex(Complex o1,Complex o2){
//         return (o1.a+o2.a);
//     }

// };

int main(){

    
    return 0;
}