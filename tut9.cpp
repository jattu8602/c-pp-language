#include <iostream>
using namespace std;
int main()
{
    cout << "this is tutorial 9" << endl;
    int age;
    cout << "what  is  your age:" << endl;
    cin >> age;

    // selection control structure: if-else if- else ladder
    //  if((age<18) && (age>0)){
    //      cout<<"you cannot drive"<<endl;
    //  }
    //  else if(age==18){
    //      cout<<"you can drive with learning pass"<<endl;
    //  }
    //  else if(age < 1){
    //      cout<<"you are not born yet"<<endl;
    //  }
    //  else{
    //      cout<<"you can drive"<<endl;
    //  }

    // selection control structure: switch case statements
    switch (age)
    {
    case 18:
        /*code*/
        cout << "you are 18" << endl;
        break;
    case 2:
        /*code*/
        cout << "you are 2" << endl;
        break;
    case 4:
        /*code*/
        cout << "you are 4" << endl;
        break;    
    default:
        cout<<"your age is not in list"<<endl;
        break;
    }

    return 0;
}
