/*

*/
#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{

int a,b;
public:
void getdata(){
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
}
void performoperations(){
cout<<"the value of a+b is :"<<a+b<<endl;
cout<<"the value of a-b is :"<<a-b<<endl;
cout<<"the value of a*b is :"<<a*b<<endl;
cout<<"the value of a/b is :"<<a/b<<endl;
}

};
class scientificcalculator{
        
int a,b;
 public:
void getdata(){
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
}
void performoperations(){
cout<<"the value of cos(a) is :"<<cos(a)<<endl;
cout<<"the value of sin(a) is :"<<sin(a)<<endl;
cout<<"the value of tan(b) is :"<<tan(b)<<endl;
cout<<"the value of exp(b) is :"<<exp(b)<<endl;
}
};
int main(){
    simplecalculator c1;
    c1.getdata();
    c1.performoperations();
    scientific c2;
    c2.getdata();
    c2.performoperations();
    return 0;
}