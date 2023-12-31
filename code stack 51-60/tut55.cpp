//pointers to derived class
#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    void display()
{
    cout<<"1 displaying base class variable var_base:"<<var_base<<endl;

}
};
class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
    cout<<"2. displaying base class variable var_derived:"<<var_derived<<endl;
    cout<<"2. displaying base class variable var_base:"<<var_base<<endl;


    }

};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass Obj_derived;
    base_class_pointer = &Obj_derived;//pointing base class pointer to derived class
    base_class_pointer->var_base = 34;
    //  base_class_pointer->var_derived = 2334;      we cannot do this,throws error

    base_class_pointer->display();

    DerivedClass * derived_class_pointer;
    derived_class_pointer = &Obj_derived;
    derived_class_pointer->var_derived = 45;

    derived_class_pointer->display();


    
    return 0;
}