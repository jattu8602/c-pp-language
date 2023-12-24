/*
BASIC INPUT/OUTPUT IN C++
c++ comes with libraries which helps us in performing input/output.
in c++ sequence of bytes corresponding to input and output are commonly known as streams
INPUT STREAM: direction of flow of bytes takes place from input device(for ex: keyboard )to the main memeory
OUTPUT STREAM: direction of flow of bytes takes place from main memory to the output device(for ex: display)




*/

#include<iostream>
using namespace std;

int main(){
    int num1, num2;

    cout<< "enter the value of num1:\n";
    cin>>num1;

    cout<< "enter the value of num2:\n";
    cin>>num2;

    /* << is called insertion operator*/
    /* >> is called extraction operator*/

    cout<<"the sum is: "<< num1+num2<< ".";
    

    return 0;
}
/*

RESERVED KEYWORDS
there are some reserved words in c++ which we can find it on c++ official website 
also on vs code there is a highlighted text which are used for denoting reserved words 
(we can easly understand it by recozanizing color of reserved words)
these keywords are not avilable for re defintion or overloading
in short you cannot create a variable with these names


*/
