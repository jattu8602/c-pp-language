#include<iostream>
using namespace std;
typedef struct employee{
    /*data*/
    int eId;
    char favChar;
    float salary;

} ep;
// union money{
//     /*data*/
//     int rice;
//     char car;
//     float pounds;

// };
// int main(){
//     struct jatin;
//     union money m1;
//     m1.rice = 45;
//     m1.car = 'c';
//     cout<<m1.car;
//     enum Meal(){breakfast, lunch, dinner};
//     Meal m1 = breakfast;
//     cout<<(m1 == 1);
//     cout<<breakfast;
//     cout<<lunch;
//     cout<<dinner;

    




int main(){
    struct employee jatin;
    

    
    jatin.eId = 1;
    jatin.favChar = 't';
    jatin.salary = 1200340;
    cout<<"the value is"<<jatin.eId<<endl;
    cout<<"the value is"<<jatin.favChar<<endl;
    cout<<"the value is"<<jatin.salary<<endl;
    
    return 0;
}