#include<iostream>
using namespace std;
int main(){
    int a ;
    cout<<"which number's table do u want."<<endl;
    cin>>a;
    
    int b = 1;

    do{
        cout<<a<<" * "<< b << " is: "<< a*b <<endl;
        b++;

    }while(b<=10);
    return 0;
}
