#include<iostream>
using namespace std;
//loop with continue
int main(){
    
    for (int i = 0; i < 4; i++)
    {
        
        if(i==2){
            continue;
        }
        cout<<i<<endl;
    }
    
    return 0;
}