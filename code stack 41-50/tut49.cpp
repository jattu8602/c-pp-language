/*
initilazation


syntax for initilazation list in constructor:
construct0r  (argument -list ):initilazition section{
    assignment + other codes;
    class test{
        int a;
        int b;
        public:
        test(int i , int j ): a(i),b(j) {constructor body}
    }

}
*/
#include<iostream>

using namespace std;
class test{
        int a;
        int b;
        public:
        // test(int i , int j ): a(i),b(j)
        // test(int i , int j ): a(i),b(j+i)
        // test(int i , int j ): a(i),b(2*j)
        // test(int i , int j ): a(i),b(a+j)
        test(int i , int j ): b(j),a(i+b)//shows garbage value
        // because a will be intilized firt
        
         {
            cout<<"constructor executed"<<endl;
            cout<<"value of a is:"<<a<<endl;
            cout<<"vlaue of b is :"<<b <<endl;
        }
    };

int main(){
    test(4,5);
    return 0;
}