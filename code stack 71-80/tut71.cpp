#include<iostream>
#include<vector>
using namespace std;
//vector manages its size automatically (we can add as many elements as we want)
void diaplay(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"   ";
    }
    cout<<endl;
    
}
int main(){
    vector<int> vec1;
    int element,size;
    cout<<"enter the size of your vector:"<<endl;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        cout<<"enter an element to add to this vector:"<<endl;
        cin>>element;
        vec1.push_back(element);
        
    }
    vec1.pop_back();//do not displays last element
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter+1,5, 566);

   
    diaplay(vec1);

    
    return 0;
}