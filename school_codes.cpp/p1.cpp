#include<iostream>
using namespace std;

int main(){
    int marks1 , marks2;
    cout<<"write value of marks1"<<endl;
    cin>>marks1;
    cout<<"write value of marks2"<<endl;
    cin>>marks2;
    int b,percentage;
    b = marks1 + marks2;
    percentage = b/2;

    cout<<"the percentage is:"<<percentage<<endl;
    if(percentage>40){
        cout<<"pass"<<endl;

    }
    else{
        cout<<"fail"<<endl;
        
    }


    return 0;
}