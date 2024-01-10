#include<iostream>
using namespace std;
class student{
    private:
    
    public:
    int roll_no;
    string name;
    void show(){
        cout<<"your name is :"<<name <<endl;
        cout<<" and your roll number is :"<<roll_no<<endl;
    }

};
int main(){
    student s;
    s.name="nitesh";
    s.roll_no = 34;
    s.show();
    


    
    return 0;
}