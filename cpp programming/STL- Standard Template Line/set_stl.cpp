#include <iostream>
#include<set>

using namespace std;
int main()
{
    //set is an unmutable data type that stores data once only and does not allow same element multiple times.

    set<int> s;
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);
    s.insert(3);
    s.insert(4);

    for( int i:s)
    {
        cout<<i<<" ";
    } cout<<endl;
    
    set<int>::iterator it = s.begin();
    s.erase(s.begin());

    for( auto i:s)
    {
        cout<<i<<" ";
    }

    return 0;
}