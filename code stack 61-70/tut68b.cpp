//template function overloading
#include<iostream>
using namespace std;
void func(int a){
    cout<<"i m first func()"<<a<<endl;
}


template <class T>
void func(T a){
    cout<<"i m templatized func()"<<a<<endl;
}
template <class T>
void func1(T a){
    cout<<"i m templatized func()"<<a<<endl;
}

int main(){
     func(4);//exact match takes the highest priorty
     func1(4);
    return 0;
}