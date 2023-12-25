/*
default data type in class


*/
#include<iostream>
using namespace std;
template <class T1=int,class T2 = float,class T3 = char>
class Jatin{
    public:
    T1 a;
    T2 b;
    T3 c;
Jatin(T1 x,T2 y,T3 z ){
        a = x;
        b = y;
        c = z; }
    void display(){
        cout<<"the value of a is :"<<a <<endl;
        cout<<"the value of b is:"<<b <<endl;
        cout<<"the value of c is :"<<c <<endl;}};
int main(){
    Jatin<> h(4,4.5,'c');
    h.display();
    cout<<endl;
    Jatin<float,char,char> g(3.4,'y','e');
    g.display();
return 0;
}