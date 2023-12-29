//this pointer in c++
#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A & setdata(float a){
        this->a =a;
        return *this;

    }
    // void setdata(float a){
    //     this->a = a;//where this is a pointer
    //     //this points to the object which we assign to it



    // }
    void getdata(){
        cout<<"the value of a is :"<<a<<endl;

    }

};
//
int main(){
    /*this is a keyword which is a pointer which points to the object which invokes
     the member function*/
    A a;
    a.setdata(4);
    a.getdata();

    return 0;
}