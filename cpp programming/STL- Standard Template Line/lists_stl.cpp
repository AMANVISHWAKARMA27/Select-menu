#include <iostream>
#include<list> //including standard list library

using namespace std;
int main()
{
    //This list is formed by double-linked lists that consists of two pointers, one at the front and other at the end.
    //Also we can not get any element from the list directly using at function, we've to reach to the element step by step.
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    //all other functions are same


    return 0;
}