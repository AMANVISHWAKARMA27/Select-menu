#include <iostream>
#include <array> //including array stl library

using namespace std;

int main()
{
    // 1. Array
    // int array[3] = {1,2,3} //a standard array we use generally.

    // STL defined array

    array<int, 4> a = {1, 2, 3, 4}; // static array hai ye

    int size = a.size();

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd index is " << a.at(2) << endl; // at function can be used to get the elements in the array
    cout << "Empty or not : " << a.empty() << endl;        // 0 for not empty and 1 for empty

    for (int i = 0; i < size; i++)
    {
        cout << a.at(i) << " ";
    }
    cout << endl;

    cout << "Element at the first of the array is " << a.front() << endl; // returns the first element of the array.
    cout << "Element at the last of the array is " << a.back() << endl;   // returns the last element of the array.

    // basically, stl array is similar to the general array.

    return 0;
}