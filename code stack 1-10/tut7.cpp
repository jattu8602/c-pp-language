/*

*/
#include<iostream>

using namespace std;
int c = 34;

int main(){
    //************BUILD IN DATA TYPES******************
    int a, b, c;
    cout<<"enter the value of a:\n";
    cin>>a;
    cout<<"enter the value of b:\n";
    cin>>b;
    c = a + b;

    cout<<"sum is :" <<c<<endl;
    // :: -----> is called scope resolution operator
    cout<<"the global c is :" <<::c<<endl;

    //***********FLOAT , DOUBLE AND LONG DOUBLE LITERALS******************
    float d = 34.4f;
    long double e = 34.4L;
    cout<<"the size of 34.4 is: "<<sizeof(34.4)<<endl;
    cout<<"the size of 34.4f is: "<<sizeof(34.4f)<<endl;
    cout<<"the size of 34.4F is: "<<sizeof(34.4F)<<endl;
    cout<<"the size of 34.4l is: "<<sizeof(34.4l)<<endl;
    cout<<"the size of 34.4L is: "<<sizeof(34.4L)<<endl;
    cout<<"the value of d is: "<<d<<endl<<"the value of e is: "<<e<<endl;
    

    //************REFRENCE VARIABLES******************
    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;

    //************TYPE CASTING******************
    int p = 45;
    float q = 45.46;
    cout<<"this value of q is "<<(int)q<<endl;
    cout<<"this value of p is "<<(float)p<<endl;
    cout<<"this value of q is "<<int(q)<<endl;
    cout<<"this value of p is "<<float(p)<<endl;
    int r = int(q);

    cout<<"the expression is "<<p+q<<endl;
    cout<<"the expression is "<<p+int(q)<<endl;
    cout<<"the expression is "<<p+(int)q<<endl;


    return 0;
}