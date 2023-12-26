#include<iostream>
#include<vector>
using namespace std;
//vector manages its size automatically (we can add as many elements as we want)
// vector methods
template<class T>
void display(vector<T> &v)
{
    cout<<"diaplaying this vector::"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<"   ";
        // cout<<v.at(i)<<"   ";
    }
    cout<<endl;
    
}
int main(){
    //ways to creat a vector
    vector<int> vec1;//zero length integer vector
     vector<char> vec2(4);//4 element characher vector
      vector<char> vec3(vec2);//4 element character vector from vec2
       vector<int> v(6,3);//6 element vector of 3s
       vec2.push_back('5');
       display(v);
    int element,size =5;
    // cout<<"enter the size of your vector:"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"enter an element to add to this vector:"<<endl;
    //     cin>>element;
    //     vec1.push_back(element);
        
    // }
    // vec1.pop_back();//do not displays last element(removes last element)
    // vector<int> :: iterator iter = vec1.begin();
    // // vec1.insert(iter+1,5, 566);//adding extra element with its cloning which is also possible

   
    // diaplay(vec1);

    
    return 0;
}