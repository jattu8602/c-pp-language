#include<iostream>
using namespace std;
class point{
    public:
    int x,y;

    point(int a, int b){
        x= a;
        y= b; 

    }
    void diaplaypoint(){
        cout<<"the point is ("<<x<<" , "<<y<<")"<<endl;

    }
};

int main(){
    point p(1,1);
    p.diaplaypoint();
    point q(3,4);
    q.diaplaypoint();    
    return 0;
}