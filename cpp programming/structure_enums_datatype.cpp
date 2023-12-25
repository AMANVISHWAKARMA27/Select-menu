#include<iostream>
using namespace std;
//By the use of structure,
// we can group items of difeerent variable, such as 
// int, char, float
typedef struct employee //typedef is used to define a shortform to the datatype
{
    /* data */
   int eld;        /*grouped three different  datatype 
                     together.*/
    char favchar;
    float salary;
} ep;

union money
{
    int rice;   /*here we can use only one datatype 
                 at a type.*/
    char car;
    float pounds;
};



int main()
{
   enum meal{breakfast, lunch, dinner};
   cout<< breakfast<<endl;
   cout<< lunch<<endl;
   cout<< dinner<<endl;
      


  return 0;
}

