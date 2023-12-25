#include <iostream>
using namespace std;

int getSum(int *arr, int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    // Refernce variables are the names given to a same memory address.
    /* Creating a refernce variable:
     int i =5;
     int &j = i;
     So, the memory address of 5 has two different names as i and j as well.*/
    // Same memory address, different names.
    //  int i = 5;
    //  int &j = i;//Refernce variable

    // cout<<i<<endl;//n5
    // i++;
    // cout<<i<<endl;// 6
    // j++;
    // cout<<j<<endl;// 7

    /*Pass by value: Suppose a main(0 function call an update() fucntion(),
    then the copy of variable created will also accupy some separate memory in the RAM.

    Pass by refernce:The new variable anme created does not require separate
    memory in the RAM. */

    // Memory allocated in stack is called as static memory allocation. Thus, when we make a static array, it is stored in stack.
    // Memory allocated in heap is called as dynamic memory allocation. Thus, when we make a variable array, it is stored in heap.

    int n;
    cin >> n;

    // variable size array. //Preferred way to define a variable size array.
    int *arr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "Answer is " << ans << endl;

    /*To delete a refernce variable we use 'delete' keyword.
    To delete a normal refernce variable, write "delete variable_name".
    To delete an arry refernce variable, we write "delete []arr".
    */

    return 0;
}