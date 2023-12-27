//STL lists
#include<iostream>
#include<iterator>
#include<list>

using namespace std;
void display(list<int> &lst){
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<< "    ";

    }
    cout<<endl;


}


int main(){
    list<int> list1;//list of 0 length
    
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(7);
    list1.push_back(13);

    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<< *iter<<"   ";
    // iter++;
    // cout<< *iter<<"   ";
    // iter++;
    // cout<< *iter<<"   ";
    // iter++;
    // cout<< *iter<<"   ";
    // iter++;
    // cout<< *iter<<"   ";



    //shorting the list
    list1.sort();
    display(list1);
    //removing elements form the list form front ,back, and in the middile 
    // list1.pop_front();
    // display(list1);
    // list1.pop_back();
    // display(list1);
    // list1.remove(7);
    // display(list1);



    list<int> list2(3);//empty list of size 7
    list<int> :: iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 6;
    iter++;
    *iter = 9;
    iter++;
    list2.sort();
    display(list2);


    //merging of lists
    list1.merge(list2);
    cout<<"list 1 after merging both the lists:"<<endl;
    list1.sort();
    display(list1);



    //reversing the list
    cout<<"after reversing it:"<<endl;
    list1.reverse();
    display(list1);




    










    
    



    
    return 0;
}