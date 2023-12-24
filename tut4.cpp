/*
VARIABLES IN C++
a variable is a conatainer to hold data
variable can be of various types 
primariliy we have these variables types in c++
int, float, char,double,boolean
int sum = 23; means sum is an integer varilabe which holds value 23 in memory



*/


#include <iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;

}
int main()
{
    int glo = 9;
    glo = 45;
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;

    // sum();
    cout <<glo<< is_true<<endl;
    cout <<"the value of pi is"<<pi;
    cout << "\nthis is tutorial 4. \nhere the value of a is " << a << ". \nthe value of b is" << b <<".";
    cout <<"\nthe value of c is "<<c<<".";
    return 0;
}