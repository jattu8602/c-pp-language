//virtual functions exmple  + creation rules in c++

/*
RULES:-
1.>they cannot be static
2.>they are accessed by object pointers
3.> virtual functions can be a friend of another class;
4.>a virtual function in base class might not be used 
5.> a virtual function is defined in a base class ,there is no necessity of redifining it in the derived class


*/
#include<iostream>
#include<cstring>
using namespace std;
class CWH{
    protected:
    string title;
    float rating;
    public:
    CWH (string s,float r){
        title = s;
        rating = r;



    }
    virtual void display (){

    }
};
class CWHVideo: public CWH{
    int videoLength;
    public:
    CWHVideo(string s,float r,int vl):CWH(s,r){
        videoLength = vl;
    }
    void display(){
        cout<<"this is an amazing vedio with title:"<<title<<endl;
        cout<<"ratings:"<<rating<<"out of 5 stars:"<<endl;
        cout<<"length of this vedio is :"<<videoLength<<" minutes "<<endl;
    }
};
// class CWHVideo: public CWH{
//     int words;
//     public:
//     CWHVideo(string s,float r,int wc):CWH(s,r){
//         words = wc;
//     }
//     void display(){
//         cout<<"this is an amazing text tutorial with title:"<<title<<endl;
//         cout<<"ratings of this text tutorial : "<<rating<<"out of 5 stars:"<<endl;
//         cout<<"no of words in this tutorial  :"<<words<<" words "<<endl;
//     }
// };


int main(){
    string title;
    float rating,vlen;
    int words;
    //for code with harry vedio
    title = "django tutorial";
    vlen = 4,56;
    CWHVideo djvedio(title,rating,vlen);
    djvedio.display();
    
    return 0;
}