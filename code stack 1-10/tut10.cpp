#include<iostream>
using namespace std;
int main(){
    /*FOR LOOP IN C++
    THERE ARE THREEE TYPES OF LOOPS IN C++
    1.FOR LOOP
    2.WHILE LOOP
    3.DO-WHILE LOOP
    
    */
   /*FOR LOOP IN C++*/
    // int i = 1;
    // cout<<i;
    // i++;

    //*****SYNTAX FOR FOR LOOP*********8
    // for (initialization; condition; updaton){
    //     loop body(c++ code);
    // }
    for (int i = 1; i <= 10; i++) 
    {
        
        cout<<i<<endl;
        
    }
    /*WHILE LOOPS*/
    //syntax
    // while(condition)
    // {
    //     c++ statements;
    // }
    int i =1;
    while(i<=40){
        cout<<i<<endl;
        i++;
    }
    /*DO WHILE LOOP IN C++*/
    //SYNTAX
    //do{
    //     c++statement;
    // }while(condition); 
    int a = 1;
    do{
        cout<<a<<endl;
        a++;

    }while(a<=10);
    return 0;
    
}