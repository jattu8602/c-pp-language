#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<string.h>
#include<iomanip>


using namespace std;
class student
{
    char sname[1];//students name 
    char sclgname[3];//college name
    char sage[2];//students age
    char srno[4];//roll number
    public:
    void new_student()
    {
        cout<<"THIS IS NEW LOGIN PORTAL"<<endl;
        cout<<"enter your name"<<endl;
        cin>>sname;
        cout<<"enter college name"<<endl;
        gets(sclgname);
        cout<<"enter your age"<<endl;
        gets(sage);
        cout<<"enter your rollnumber"<<endl;
        gets(srno);
    }
    void student_info(){
        cout<<"name:"<<sname<<endl;
        cout<<"college name:"<<endl;
        puts(sclgname);
        cout<<"age:"<<endl;
        puts(sage);
        cout<<"rollnumber:"<<endl;
        puts(srno);
    }
    void modify_sid(){
        cout<<"name:"<<sname<<endl;
        cout<<"editing college name:"<<endl;
        gets(sclgname);
        cout<<"editing age:"<<endl;
        gets(sage);
        cout<<"editing rollnumber:"<<endl;
        gets(srno);

    }
    char* retsname(){
        return sname;

    }
    void report(){
        cout<<sname<<setw(30)<<sclgname<<setw(30)<<sage<<setw(30)<<srno<<endl;
    }
};