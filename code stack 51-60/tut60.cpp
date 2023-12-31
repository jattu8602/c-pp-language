//input and output in c++ : reading and writing files
#include<iostream>
#include<fstream>
/*
the useful classes for working with files in c++ are:
1. fstreambase
2. ifstream--> derived for fstreambase
3. ofstream --> derived for fstreambase

in order to work with files in c++
you will have to open it.
primarilly, there are 2 ways to open a file:
1. using the constructor
2. using the member function open()of the class

*/
using namespace std;

int main(){
    string st = "jattu";
    //opeining files using sonstructor
    ofstream out("sample60.txt");//write operation 
    out<<st;

    return 0;
}