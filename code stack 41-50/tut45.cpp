/*
code example demonstrating virtual base class in c++

                    let:    student be a base class
 derived classes from student class are:   test class and sport class
 derived class from  test class and sport class is :       result            


*/
#include<iostream>
using namespace std;
class student{
    protected :
    int roll_no;
    public:
    void set_number(int a){
        roll_no= a;

    }
    void print_number (void ){
        cout<<"your roll number is :"<<roll_no<<endl;
    }

};
class test:public virtual student{
    protected:
    float maths,physics;
    public:
    void set_marks(float m1,float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
        cout<<"your result is here:"<<endl
            <<"maths "<<maths<<endl
            <<"physics"<<physics<<endl;
    }


};
class sport: public virtual student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"your pt score is :"<<score<<endl;
    }
};
class result:public test,public sport{
    private:
    float total;
    public:
    void display(void){
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout<<"your total score is :"<<total <<endl;

    }

};
int main(){
    result jatin;
    jatin.set_number(323);
    jatin.set_marks(44.34,34.5);
    jatin.set_score(45);
    
    jatin.display();

    return 0;
}