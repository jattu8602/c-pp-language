//functions objects in stl
#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    //FUNCTION OBJECT: function wrapped in a class so that it avilable like an object
    int arr[] = {1,3,5,6,7,8,8,9,67};
    // sort(arr,arr+5);
    sort(arr, arr+5,greater<int>());
    for (int i = 0; i < 6; i++)
    {
cout<<"shorted array is :"<<arr[i]<<endl;
    }
    
    //more in functions website (functorrs)
    //cPP algorithms
    
    return 0;
}