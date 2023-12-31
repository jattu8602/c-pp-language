//virtual functions exmple  + creation rules in c++
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
class CWHtext: public CWH{
    int words;
    public:
    CWHtext(string s,float r,int wc):CWH(s,r){
        words = wc;
    }
    void display(){
        cout<<"this is an amazing text tutorial with title:"<<title<<endl;
        cout<<"ratings of this text tutorial : "<<rating<<"out of 5 stars:"<<endl;
        cout<<"no of words in this tutorial  :"<<words<<" words "<<endl;
    }
};


int main(){
    string title;
    float rating,vlen;
    int words;
    //for code with harry text
    title = "django tutorial text";
    words = 1234;
    rating  = 4.56;
    CWHtext djtext(title,rating,words);
    djtext.display();
    CWH* tuts[2];
    tuts[0]= djvedio;
    tuts[1] = djtext;
    tuts[0]->display();
    tuts[1]->display();   
    return 0;
}