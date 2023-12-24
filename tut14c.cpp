//***************************************************************************************************8
//unions
#include<iostream>
using namespace std;


union ZPL {
    int lover1;
    char lover2;
    float lover3;

};
int main(){
    union ZPL p1;
    p1.lover1 = 34;
    cout<<"the first value at "<<"the allocated memory :"<<p1.lover1<<endl;
    p1.lover2 = 'n';
    cout<<"the next value stored after removing the prevoius value :"<<p1.lover2<<endl;
    p1.lover3 = 45.34;
    cout<<"the final value at the same allocated memery space :"<<p1.lover3;
    return 0;

        
}