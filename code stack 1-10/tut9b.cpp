#include <iostream>
using namespace std;
int main()
{
    cout << "this is tutorial 9" << endl;
    int age;
    cout << "what  is  your age:" << endl;
    cin >> age;

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
