#include<iostream>
using namespace std;
int add(float a, int b){
    cout<<"using programme with 2 arguments"<<endl;
    return a+b;
}
int add(int a, int b , int c){
    cout<<"using programme with 3 arguments"<<endl;
    return a+b+c;
}
//calculate the volume of the cylinder
int vol(double r, int h){
    
    return(3.14*r*r*h);
}
//calculate the volume of a cube is
int vol(int a){
    return a*a*a;
}
//rectanguular box or cubiod
int vol(int l, int b, int h){
    return (l*b*h);
}

int main(){
    cout<<"the sum of 3 and 5 is "<<add(3,5)<<endl;
    cout<<"the sum of 6 4 and 9 is "<<add(6,4,9)<<endl;
    cout<<"the volume of cuboid of 1,2,3 is "<<vol(1,2,3)<<endl;
    cout<<"the volume of cube of 4 is"<<vol(4)<<endl;
    cout<<"the volume of cylinder of 5.6 and 6 is "<<vol(5.6,6)<<endl;    
    
    
    return 0;
}











































