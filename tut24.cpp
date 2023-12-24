#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "enter the id" << endl;

        cin >> id;
        count++;
    }
    void getData(void)
    {

        cout << "the id of this employeee is" << id << "and this is employee number" << count << endl;
    }
    static void getCount(void){
        cout<<"the value of count is"<<count<<endl;
    }


};
int employee::count = 100; // default value is 0
int main()
{
    employee jatin, nitin, rohan, avi;
    jatin.setData();
    jatin.getData();
    employee :: getCount();
    nitin.setData();
    nitin.getData();
    employee :: getCount();
    rohan.setData();
    rohan.getData();
    employee :: getCount();
    avi.setData();
    avi.getData();
    employee :: getCount();

    return 0;
}