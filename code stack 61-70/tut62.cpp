#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out;
    out.open("jattu.txt");
    out<<"this is me"<<endl;
    out<<"actually my name is jatin"<<endl;
    out<<"hello world"<<endl;
    out.close();



    ifstream in;
    string st, st2;
    in.open("jattu.txt");
    // in>>st>>st2;
    // cout<<st<<" ";
    // cout<<st2;
    while(in.eof()==0){
        getline(in,st);
        cout<<st<<endl;

    }
    in.close();


    return 0;
}