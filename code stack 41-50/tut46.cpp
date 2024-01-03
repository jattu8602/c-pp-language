/*
CONSTRUCTORS IN DERIVED CLASS

1.>we can use constructors in derived classes in c++
2.>if base class constructor does not have any arguments , there is no need of any constructor
   in derived class
3.>but if there are one or more arguments in the base class constructor, derived class need to pass
   arguments to the base class constructor 
4.>if both base and derived classes have constructors , base class constructor is executed first.
5.>in multiple inheritance ,base classes are constructed in the order in which they appear in the 
   class decleration
6.>in multi level inheritance , the constructor are executed in the order of inheritance   


SPECIAL SYNTAX:-

1.>c++ supports an special syntax for passing arguments to multiple base classes
2.>the constructor of the derived class recieves all the arguments at once and then will pass
   the calls to the respective base classes
3.>the body is called after all the constructors are finished executing.


*/
#include<iostream>
using namespace std;

int main(){
    
    return 0;
}