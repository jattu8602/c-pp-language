#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}
// this will not swap a and b

void swap(int a, int b){//temp  a  b
    int temp = a;       //4     4  5
    a = b;              //4     5  5
    b = temp;           //4     5  4

}
// ***********CALL BY REFERENCE USING POINTERS
void swapPointer(int* a, int* b){//  temp  a  b
    int temp = *a;               //  4     4  5
    *a = *b;                     //  4     5  5
    *b = temp;                   //  4     5  4

}
// ***********CALL BY REFERENCE USING c++ reference variables 
// void swapReferenceVar(int &a, int &b){//  temp  a  b
//     int temp = a;                    //  4     4  5
//     a = b;                          //  4     5  5
//     b = temp;                        //  4     5  4

// }
int & swapReferenceVar(int &a, int &b){//  temp  a  b
    int temp = a;                    //  4     4  5
    a = b;                          //  4     5  5
    b = temp;                        //  4     5  4
    return a;
}
// int & swapReferenceVar(int &a, int &b){//  temp  a  b
//     int temp = a;                    //  4     4  5
//     a = b;                          //  4     5  5
//     b = temp;                        //  4     5  4
//     return b;
// }
    int main(){
        int a = 4, b = 5;
        // cout<<"the sum of the 4 and 5 is: "<<sum(a,b);
        cout<<"the value of a is "<<a<<"the vlaue of b is "<<b<<endl;
        swapReferenceVar(a,b) = 78;
        cout<<"the value of a is "<<a<<"the vlaue of b is "<<b<<endl;

    
    return 0;
}