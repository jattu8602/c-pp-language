#include <iostream>
using namespace std;
int main()
{
    cout << "this is tutorial 9" << endl;
    int age;
    cout << "what  is  your age:" << endl;
    cin >> age;

    //selection control structure: if-else if- else ladder
     if((age<18) && (age>0)){
         cout<<"you cannot drive"<<endl;
     }
     else if(age==18){
         cout<<"you can drive with learning pass"<<endl;
     }
     else if(age < 1){
         cout<<"you are not born yet"<<endl;
     }
     else{
         cout<<"you can drive"<<endl;
     }

    

    return 0;
}
