/*
                        MULTI-LEVEL INHERITANCE

*/

#include<iostream>
using namespace std;
class student{
    protected:
    int roll_no;
    public:
    void set_rollnumber(int);
    void get_rollnumber(void);
};
void student :: set_rollnumber(int r){
    roll_no = r;
}
void student:: get_rollnumber(){
    cout<<"the roll number is :"<<roll_no<<endl;
}
class Exam: public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks(void);

};
void Exam :: set_marks(float m1 ,float m2){
maths = m1;
physics = m2;
}
void Exam :: get_marks(){
    cout<<"the marks obtained in maths are:"<<maths<<endl;
    cout<<"the marks obtained in physics are :"<<physics<<endl;
}
class result : public Exam{
    float percentage ;
    public:
    void display(){
        get_rollnumber();
        get_marks();
        cout<<"your percentage is "<<(maths +physics)/2<<"%"<<endl;
    }

};
int main(){
    result jatin;
    jatin.set_rollnumber(693);
    jatin.set_marks(34.0,91.0);
    jatin.display();








    
    return 0;
}