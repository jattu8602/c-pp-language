#include<iostream>
using namespace std;

int main(){
    //array example
    //array
    int marks[4] = {12,34,56,7};
    int mathMarks[4];
    mathMarks[0] = 234;   
    mathMarks[1]= 23;

    mathMarks[2]= 2;

    mathMarks[3]= 24353;
    cout<<"these are mathMarks"<<endl;
    cout<<mathMarks[0]<<endl;   
    cout<<mathMarks[1]<<endl;
    cout<<mathMarks[2]<<endl;   
    cout<<mathMarks[3]<<endl;
    cout<<"these are Marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=3456;//you can change the value of an array
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"the value of marks"<<i<<"is "<<marks[i]<<endl;
        
    }
    //c++ pointers and arrays
    int* p = marks;
    cout<<*p++<<endl;
    cout<<*p<<endl;
    // cout<<"the value of marks *p is "<<*p<<endl;
    // cout<<"the value of marks *(p+1) is "<<*(p+1)<<endl;
    // cout<<"the value of marks *(p+2) is "<<*(p+2)<<endl;
    // cout<<"the value of marks *(p+3) is "<<*(p+3)<<endl;
    

    




    return 0;
}