#include<iostream>
using namespace std;
/*
WHAT ARE ARRAYS IN C++?
1.>an array is a collection of items of similar type stored in contigous memory locations
2.>sometimes , a simple variable is not enough to hold all the data 
3.>for example,lets say we want to store the marks of 2500 students having 2500 different 
   variables for this task is not feasible
4.>to solve this problem , we can define an array with size 2500 that can hold the marks 
   of all students
*/

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
    // loops with array
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<"the value of marks"<<i<<"is "<<marks[i]<<endl;
        
    }


    
    

    




    return 0;
}