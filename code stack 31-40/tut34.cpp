/*
copy constructor 

*/

#include<iostream>
using namespace std;
class Number{
    private:
    int a ;
    public:
    Number (){
        a = 10;
    }
    Number(int num){
        a  = num;
    }
    // when no copy constructors is found ,compiler suppiles its own copy constructor
    Number(Number &obj){
        cout<<"copy constructor called:"<<endl;
        a  = obj.a;
    }
    void display(){
        cout<<"the number for this object is :"<<a <<endl;
    }
};
int main(){

    Number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();
    // z1 should exactly resemble z or x or y in example of copy consturctor
    Number z1(z);// copy constructor invoked
    z1.display();
    Number z3 = z;// copy constructor invoked

    z2 = z;//in this case copy constructor not called


    
    return 0;
}