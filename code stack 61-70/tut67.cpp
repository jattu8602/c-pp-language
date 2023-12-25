/*

*/
#include<iostream>
using namespace std;
template<class T1,class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a+b)/2;
    return avg;


}

int main(){
    float a;
    a = funcAverage(5,2.5);
    printf("the average of these numbers is %.3f",a);


    
    
    return 0;
}