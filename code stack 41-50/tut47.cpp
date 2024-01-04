/*

*/
#include<iostream>
#include<cmath>
using namespace std;
class simplecalculator{

int a,b;
public:
void getdatasimple(){
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
}
void performoperationssimple(){
cout<<"the value of a+b is :"<<a+b<<endl;
cout<<"the value of a-b is :"<<a-b<<endl;
cout<<"the value of a*b is :"<<a*b<<endl;
cout<<"the value of a/b is :"<<a/b<<endl;
}

};
class scientificcalculator{
        
int a,b;
 public:
void getdatascientific(){
    cout<<"enter the value of a:"<<endl;
    cin>>a;
    cout<<"enter the value of b:"<<endl;
    cin>>b;
}
void performoperationsscientific(){
cout<<"the value of cos(a) is :"<<cos(a)<<endl;
cout<<"the value of sin(a) is :"<<sin(a)<<endl;
cout<<"the value of tan(b) is :"<<tan(b)<<endl;
cout<<"the value of exp(b) is :"<<exp(b)<<endl;
}
};

class hybridcalculator : public simplecalculator, public scientificcalculator{

};
int main(){
    // simplecalculator c1;
    // c1.getdata();
    // c1.performoperations();
    // scientificcalculator c2;
    // c2.getdata();
    // c2.performoperations();
    hybridcalculator calc;
    calc.getdatasimple();
    calc.performoperationssimple();
    

    return 0;
}