/*
VARIABLES IN C++
a variable is a conatainer to hold data
variable can be of various types 
primariliy we have these variables types in c++
int, float, char,double,boolean
int sum = 23; means sum is an integer varilabe which holds value 23 in memory


SYNTAX FOR DECLARING VARIABLES IN C++
data_type variable_name  =  value
example: int a = 4,b = 3;
based on scope, variables can be classified into two types
1.local variables
2.global vriables


VARIABLE SCOPE
scope of a variable is the region in code where the existance of variable is valid.
based on scope we have local and global variables in c++
LOCAL VARIABLES:- local variables are declared inside the braces of any function and can be accessed 
                  only from here.
GLOBAL VARIABLES:- global variables are declared outside any funciton and can be excessed form 
                   anywhere.



BUILT IN DATA TYPES 
int : 1,2 ,3,4,5,6,.....
float : 3.45 ,3.678    (decimal numbers of low precision)
char :  D,c,p,L,k   
double : 3.2345452543645657568568568765978.......(decimal numbers of high percison)
bool : true and false





USER DEFINED DATA TYPES IN C++
struct
union
enum



DERIVED DATA TYPES IN C++
array
function 
pointer

*/


#include <iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo<<endl;

}
int main()
{
    int glo = 9;
    glo = 45;
    // int a = 14;
    // int b = 15;
    int a = 14, b = 15;
    float pi = 3.14;
    char c = 'd';
    bool is_true = false;

    // sum();
    cout <<glo<<endl<< is_true<<endl;
    cout <<"the value of pi is"<<pi;
    cout << "\nthis is tutorial 4. \nhere the value of a is " << a << ". \nthe value of b is" << b <<".";
    cout <<"\nthe value of c is "<<c<<".";
    return 0;
}
/*
RULES TO DECLARE VARIABLES IN C++
variable name in c++ can range from 1 to 255 characters
all variable name must begin with a letter of the alphabet or an underscore
after the first initial letter,variable name can also contain letters and numbers
variable names are case sensitive
no spaces or special characters are allowed 
you cannot use a c++ keyword (a reverse word ) as a variable name.
*/