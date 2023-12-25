#include <iostream>
using namespace std;

void printPointer( int *p){
    cout<<p<<endl;
}
void update(int *p){
    p=p+1;
    cout<<p<<endl;
}

int main()
{
    int num = 5;
    cout<<num<<endl;
    //Address of operator = &

    cout<<"Address of num is : "<<&num<<endl;

    /*When we write &num, it means we want address of num.
    When we write num, it means we want to access the value at num.*/

    int *ptr = &num;
    cout<<ptr<<endl; //This gives the address.
    cout<<*ptr<<endl; //This gives the value stored at that address.
    
    //The datatype of pointer should is same as the datatype of the value need to be stored.
    cout<<"The size of integer is: "<<sizeof(num)<<endl;
    cout<<"The size of integer pointer is: "<<sizeof(ptr)<<endl;

    //An integer takes memory of 4 bits whereas an integer pointer takes a memory of 8 bits.
    char ch = 'a';
    char *cptr = &ch;

    //A character takes 1 bit memory but pointer takes 8 bits.
    cout<<"The size of character is: "<<sizeof(ch)<<endl;
    cout<<"The size of character pointer is: "<<sizeof(cptr)<<endl;
    
    //Let data be of any type, pointer will always take 8 bits of memory.

    int num1 = 5;
    int a = num1;
    cout<<"a before "<<num1<<endl;
    a++;
    cout<<"a after "<<num1<<endl;

    int *p = &num1;
    cout<<"Before "<<num1<<endl;
    (*p)++;
    cout<<"After "<<num1<<endl;


    //Important Concept

    int i = 3;
    int *t = &i;
    cout<< (*t)++<<endl;

    //Pointer for arrays

    int arr[10]={1,2,3,4,5};
    cout<<"Address of first memory block: "<<arr<<endl;
    cout<<"Address of first memory block: "<<&arr[0]<<endl;
    cout<<arr[0]<<endl;
    cout<<*arr<<endl;

    /* arr[i] = *(arr + i) OR
       i[arr] = *(i+arr)  Both are same and executable*/

    cout<<2[arr]<<endl;  


    //Character Arrays

    char chr[6] = "abcde";

    cout<<arr<<endl;
    cout<<chr<<endl;
    //cout performs differently in case of int arrays and char arrays.
    char *c = &chr[0];
    //prints entire string
    cout<<c<<endl;

    //printing address using function.
    int value = 5;
    int *pp = &value;
    printPointer(pp);

    cout<<"Before: "<<p<<endl;
    update(p);
    cout<<"After: "<<p<<endl;

    return 0;
}