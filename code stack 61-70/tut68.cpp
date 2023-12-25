// template function overloading
#include <iostream>
using namespace std;
template <class T>
class Jatin
{
public:
    T data;
    Jatin(T a)
    {
        data = a;
    }
    void display();
    
};
template <class T>
void Jatin<T>:: display(){
    cout<<data;

}


int main()
{
    // Jatin<float> j(5.34);
    Jatin<char> j('c');
    // Jatin<char> j('c');
    // cout<<j.data<<endl;


    cout << j.data << endl;
    j.display();


   
    return 0;
}