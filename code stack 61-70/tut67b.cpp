//swapping using template
#include<iostream>
using namespace std;
template<class T>
void swapp(T &a ,T &b){
    T temp = a;
    a = b;
    b = temp;}

int main(){
    int x,y;
    cout<<"enter first value:"<<endl;
    cin>>x;
    cout<<"enter second value:"<<endl;
    cin>>y;
    swapp(x,y);
    cout<<"after swapping first value is :"<<x<<endl;
    cout<<"and second value is :"<<y<<endl;

    
    return 0;
}