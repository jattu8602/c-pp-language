#include<iostream>
using namespace std;

int main(){
    int l,b,h,x,y,z;
    float a;
    
    cout<<"enter value of l,b,h respectiveley"<<endl;
    cin>>l>>b>>h;
    x=l*h;
    y=h*b;
    z=b*l;
    a = 2*(x+y+z);
    cout<<"area is :"<<a<<endl;
    cout<<"volume is: "<<l*b*h<<endl;

    return 0;
}