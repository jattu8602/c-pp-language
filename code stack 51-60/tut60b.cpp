#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //opening file using constructor and writing to it
    string st = "jatin";
    string st2;
    ifstream cin("sample60b.txt");//read operation
    cin>>st2;
    cout<<st2;
    getline(cin,st2);
    cout<<st2;
    return 0;
}