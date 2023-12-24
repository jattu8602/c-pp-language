//reading and writing to a file
/*
#include<.fstream>
3 useful classes 
1.fstreambase
2.ifstream->derived form1
3.ofstream->derived from2


READ OPEERATION
if stream in ("this.txt");
string st;
in>>st; (just like cin)


WRITE OPERATION
ofstream out ("this.txt")
string st = "harry";
out<<st;(writes to a file this.txt)



*/
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    //connecting our file with jout stream
     ofstream jout("jattu.txt");
     //creating a name string and filling it with the string entered by user
     cout<<"enter your name:"<<endl;
     string name;
     cin>>name;
     //writing a string to a file
    jout<<name + " is my name";
    jout.close();//for closing the supply

    ifstream jin("jattu.txt");
    string content;
    jin>>content;
    cout<<"the content of this file is:"<<content;
    jin.close();


    
    return 0;
}