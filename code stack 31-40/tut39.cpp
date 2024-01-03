/*
protected access modifiers in c++

for a protected member:
                         public derivation  private derivation     protected 
                         
1>private members        not inherited      not inherited          not inherited
 
2>protecte members       protected          private                protected

3>public members         public             private                protected

*/
#include<iostream>
using namespace std;
class Base{
    private://it cannot be inherited
    protected://its like private variable which can be inherited
    int a;
    private://it can be inherited
    int b;


};

class Derived:protected Base{



};

int main(){
    Base b;
    Derived d;
    //cout<<d.a; //willl not work since a is protected in both base as well as derived class
    return 0;
}