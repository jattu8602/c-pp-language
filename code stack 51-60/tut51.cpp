//pointers to objects and arrow operator in c++
#include<iostream>
using namespace std;
class complex{
    int real, imaginary;
    public:
    void getdata(){
        cout<<"the real part is :"<<real<<endl;
        cout<<"the imaginary part is :"<<imaginary<<endl;

    }
    void setdata(int a,int b){
        real = a;
        imaginary = b;

    }

};

int main(){
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex;

    //(*ptr).setdata(1,24);//bracket is important in *ptr
    ptr->setdata(1,24);//same as above
    //(*ptr).getdata();//is also as good as 
    ptr->getdata();//same as above




    //ARRAY OF OBJECTS
    complex *ptr1 = new complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();

    
    return 0;
}