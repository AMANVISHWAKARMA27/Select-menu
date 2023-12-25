#include <iostream>
using namespace std;

//Below is a macro
#define pi 3.14 //Requires no memory in space and cannot be changed.
//This is an example of object-liek macro

//Example for chain-macro
#define information name age gender
#define name "Aman"
#define age 19
#define gender "Male"

//Example for multi-line macro
#define Element 1, \
                2, \
                3 

//Function-like macro
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    // int r = 5;
    // // double pi = 3.14; //requires space in memory and its value can be changed.

    // double area = pi*r*r;
    // cout<<area<<endl;

    //------------------------------------------------------------------------------------------

    // cout<<"My name is "<<name<<" and I'm "<<age<<" years old and my gender is "<<gender<<".";

    //------------------------------------------------------------------------------------------

    // int arr[] = { Element };

    // for ( int i = 0; i < 3 ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }

    //-----------------------------------------------------------------------------------------

    // cout<<min(1,2)<<endl;

    return 0;
}