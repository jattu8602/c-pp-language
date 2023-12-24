#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    cout<<"enter value of a and b"<<endl;
    cin>>a>>b;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<a<<endl;

    cout<<b;

    return 0;
}