//key value pairs
#include<iostream>
#include<map>
#include<string>
#include<iterator>
#include<list>


using namespace std;
//map is an asseciative array

int main(){
    map<string, int >marksmap;
    marksmap["jatin"] = 45;
    marksmap["nitin"] =23;
    marksmap["jattu"]= 4;
    marksmap.insert(
        {
            {"kozume"s, 187},{"kuroo",234}
        }
    );
    map<string, int > :: iterator iter;
    for(iter = marksmap.begin();iter! = marksmap.end();iter++){
        cout<<(*iter).first<< "   "<<(*iter).second<<"\n";

    }

    //there is insert method also

    cout<<"the size is:"<<marksmap.size()<<endl;
    cout<<"the max size is :"<<marksmap.max_size()<<endl;
    cout<<"the empty's return value is:"<<marksmap.empty()<<endl;
    

    
    return 0;
}












































































































































































































// #include<iostream>
// using namespace std;

// int main(){
//     // int a,b;
//     // cout<<"enter two numbers :"<<endl;
//     // cin>>a;
//     // cin>>b;
//     // cout<<"sum of two numbers is :"<<a+b;


// int a,b;
// cout<<"enter two numbers:"<<endl;
// cin>>a;
// cin>>b;
// cout<<"sum of two numbers is:"<<a+b;



//     return 0;
// }
