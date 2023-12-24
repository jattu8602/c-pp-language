#include<iostream>
using namespace std;
// inline int product(int a, int b){
//     return a*b+1;
// }
inline int product(int a, int b){
    //not recommended to use below lines with inline functions
    // static int c = 0;//this executes only once
    // c = c+1;//next time this function is run, the value of c will be retained
    return a*b;
}
int moneyRecieved(int currentMoney, float factor = 1.04)
{return currentMoney * factor;
}
// int strlen(cons char *p){

// }
int main(){
    int a , b;
    // cout<<"enter the value of a and b is :"<<endl;
    // cin>>a>>b;
    int money = 100;
    // cout<<"the product of a and b is :"<<product(a,b)<<endl;
    cout<<"if you have "<<money<<"rs in your bank account, you will recieve"<<moneyRecieved(money,1.1)<<"rs after 1 year"<<endl;
    

    return 0;

    
}