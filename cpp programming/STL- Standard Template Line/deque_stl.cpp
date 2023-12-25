#include <iostream>
#include <deque> //including standard deque library

using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);
    d.push_front(6);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    d.pop_front();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    // all other functions are also same.

    cout << "Before erase: " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1); // deletes the elements by taking a range.
    cout << "After erase: " << d.size() << endl;

    

    return 0;
}