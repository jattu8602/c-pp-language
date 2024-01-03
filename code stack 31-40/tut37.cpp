/*

*/
#include<iostream>
using namespace std;
//base class
class Employee {
   
   
    public:
     int id  ;
     float salary ;
    Employee(int inpid){
        id = inpid;
        salary = 34;

    }
    Employee(){

    }

};
/*
derived class syntax
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc.
}
Note:
1.>default visibility mode is private
2.>public visibility mode : public members of the base class becomes public members of the derived class
3.>private visibility mode : public members of the base class becomes private members of the derived class
4.>PRIVATE members can never be inherited
*/

//creating a programmer class derived from empoyee base class
class programmer: Employee {
    public:
    
    programmer(int inttt){
        id = inttt;
    }
    int languagecode = 9;
    void getdata(){
        cout<<"id"<<endl;
    }


};
int main(){
    Employee jatin(1),nitin(2);
    cout<<jatin.salary<<endl;
    cout<<nitin.salary<<endl;
    programmer skillf(10);
    cout<<skillf.languagecode<<endl;
    skillf.getdata();
    
    return 0;
}