//********************************************************************************************************
//tyedef function in structure
#include<iostream>
using namespace std;


typedef struct hindilanguage {
    int h1;
    char h2;
    float h3;

}HL;
int main(){
    HL hindi;
    hindi.h1 = 34;
    hindi.h2 = 'e';
    hindi.h3 = 455.56;
    cout<<hindi.h1<<endl<<hindi.h2<<endl<<hindi.h3<<endl;

}