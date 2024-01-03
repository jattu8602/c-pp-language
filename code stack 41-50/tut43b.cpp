/*
n          
*/
#include<iostream>
using namespace std;
class base1{
    public:
    void greet(){
        cout<<"how are you ?"<<endl;

    }

};
class base2{
    public:
void greet(){
    cout<<"kaise ho ?"<<endl;
}
};
class derived : public base1,public base2{
    int a;
    public:
    void greet(){
        base1::greet();
    }

};
class b {
public:
void say(){
    cout<<"hello world"<<endl;
}
};
class d: public b {
    int a;
// public:
// void say(){
//     cout<<"hello my beautiful people"<<endl;
// }
};

int main(){
    // Ambiguity 1
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();

    // Ambiguity 2
    b b;
    b.say();
    d d;
    d.say();//can be called by base as well as derived class (by conditions)




    return 0;
}