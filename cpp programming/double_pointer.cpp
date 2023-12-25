#include <iostream>
using namespace std;
void update(int **p)
{
    // p = p+1;
    // Kuch change hoga?? -No

    // *p = *p+1;
    // Kuch change hoga?? -Yes

    // **p = **p+1;
    // Kuch change hoga?? -Yes
}
int main()
{
    /*Double pointer is a memory location used to store the address of
    of a pointer. In simple language, we can say that it
    is the pointer of a pointer.
    It is defined as follows;*/

    int a = 5;
    int *ptr = &a;       // Pointer
    int **dubptr = &ptr; // Double pointer

    // cout << "Address of a:" << ptr << endl;
    // cout << *dubptr << endl; // same as above
    // cout << "Address of ptr: " << dubptr << endl;
    // cout<<&ptr<<endl;//same as above

    /*Also we can create another pointer to store the address
    of the double pointer by using three asterisk and so on.*/

    // Pointer and functions

    // cout<<endl;
    // cout<<"Before: "<<a<<endl;
    // cout<<"Before: "<<ptr<<endl;
    // cout<<"Before: "<<dubptr<<endl;
    // update(dubptr);
    // cout<<"After: "<<a<<endl;
    // cout<<"After: "<<ptr<<endl;
    // cout<<"After: "<<dubptr<<endl;

    return 0;
}