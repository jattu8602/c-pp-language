#include<iostream>
using namespace std;
// ***********************************************************************************************************
// structure
struct HL{
    int h1;
    char h2;
    float h3;

};


int main(){
    struct HL hindi;
    hindi.h1 = 23;
    hindi.h2 = 'h';
    hindi.h3 = 78.56;
    cout<<hindi.h1<<endl<<hindi.h2<<endl<<hindi.h3<<endl;
    
    return 0;
}

// #include<iostream>
// using namespace std;
// typedef struct employee{
//     /*data*/
//     int eId;
//     char favChar;
//     float salary;

// } ep;
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

    




// // int main(){
// //     struct employee jatin;
    

    
// //     jatin.eId = 1;
// //     jatin.favChar = 't';
// //     jatin.salary = 1200340;
// //     cout<<"the value is"<<jatin.eId<<endl;
// //     cout<<"the value is"<<jatin.favChar<<endl;
// //     cout<<"the value is"<<jatin.salary<<endl;
    
//     return 0;
// }
