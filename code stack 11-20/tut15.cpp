#include<iostream>
using namespace std;
// function prototype*****************************************
// type unction-name(arguments);*******************************



// int sum(int a, int b);----->acceptable
// int sum(int a, b);------------->not acceptable
// int sum(int , int );------------------->acceptable
int sum(int, int);
void g(void);
int sum(int a, int b ){
    int c = a + b;
    return c;

}

int main(){
    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;
    // num 1 and num 2 are actual parameters 
    //a and b are formal parameters
    cout<<"the sum of num1 and num2 is"<<sum(num1,num2)<<endl;
    g();
    
    
    return 0;
}
void g(){
    cout<<"hello gm"<<endl;
}