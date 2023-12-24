#include<iostream>
using namespace std;
class employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 151;
        cout<<"enter the id of employee"<<endl;
        cin>>id;
        
    }
    void getId(void){
        cout<<"the id of this employee is "<<id<<endl;
    }
};

int main(){
    // employee jatin, harry, avi;
    // jatin.setId();
    // jatin.getId();
    employee cid[4];
    for (int i = 0; i <4; i++)
    {
        /* code */
        cid[i].setId();
        cid[i].getId();
    }
    


    

    
    return 0;
}