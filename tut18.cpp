#include<iostream>
using namespace std;
int fib(int n){
    if(n<2){
        return 1;
    }
    return fib(n-2) + fib(n-1);
}
int factorial(int n){
    if (n<=1){
        return 1;

    }
    return n * factorial(n-1);

}

int main(){
    // RECURSIONS AND RECURSIVE FUNCTIONS IN C++
    //factorial of a numberr:
    // 6! = 6*5*4*3*2*1 = 720
    // 1! = 1 by definition
    // n! n*(n-1)!
    // 0! = 1 by difinition
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<"is: "<<factorial(a)<<endl;
    cout<<"the fibonaaci series of "<<a<<"is: "<<fib(a)<<endl;

    
    return 0;
}