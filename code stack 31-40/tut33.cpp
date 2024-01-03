//dynamic initialization of objects using constructors
#include<iostream>
using namespace std;
class bankdeposite{
    int principal;
    int years;
    float interestrate;
    float returnvalue;
    public:
    bankdeposite(){

    }
    bankdeposite(int p,int y, float r);//r can be a value like 0.04
    bankdeposite(int p,int y,int r);   //r can be a value like 14
    void show();
    
};
bankdeposite :: bankdeposite(int p,int y,float r){
    principal = p;
    years = y;
    interestrate =r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1+r);
    }
    
}
bankdeposite :: bankdeposite(int p,int y, int r){
    principal= p;
    years= y;
    interestrate= float(r)/100;
    returnvalue = principal;
    for (int i = 0; i <y; i++)
    {
    returnvalue = returnvalue *(1+r);
    }
    
}

void bankdeposite :: show(){
    cout<<"principal amount was "<<principal<<endl<<". return value after "<<years<<" years is : "<<returnvalue<<endl;
    }
int main(){
    bankdeposite bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"enter the vlaue of p, y and r"<<endl;
    cin>>p>>y>>r;
    bd1 =bankdeposite(p,y,r);
    bd1.show();

    
    return 0;
}