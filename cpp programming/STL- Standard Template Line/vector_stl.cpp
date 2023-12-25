#include <iostream>
#include <vector> //including vector stl library

using namespace std;
int main()
{
    // 2. Vector
    // Vector is also a contagious memory storing tool which is dynamic in nature.
    // HEere, when the previous array gets completely filled, it increases its size to store excess inputs.
    // Vectors creates a new array having the size twice that of previous one and copies the elements of the previous one into the new one and then dumps the old one.

    // vector<int> v;
    vector<int> v(5, 1);//(size, initializing element); initializing element means that all the elements of the vector will be that in beginning.
    cout << "capacity : " << v.capacity() << endl; // This tells the maximum storage of the vector.

    v.push_back(1); // push_back is used to insert elements into vector
    cout << "Capacity : " << v.capacity() << endl;

    v.push_back(2);
    cout << "Capacity : " << v.capacity() << endl; // output 2

    v.push_back(3);
    cout << "Capacity : " << v.capacity() << endl; // output 4 as size doubled

    cout << "size : " << v.size() << endl; // Gives the number of elements stored at present

    cout << "Element at 1nd index : " << v.at(1) << endl; // to get the element at an index.

    cout << "Element at the first of the vector is " << v.front() << endl; // returns the first element of the vector.
    cout << "Element at the last of the vector is " << v.back() << endl;   // returns the last element of the vector.

    // POP_BACK
    cout << "Before pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back(); // removes an element from the end of the vector.

    cout << "After pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.clear(); // will empty the vector; the size will become 0 but capacity will not be 0.

    return 0;
}