#include <iostream>
using namespace std;

inline int func(int& a,int& b)
{
    return (a>b) ? a:b;
}

int main()
{
    int a = 1, b = 2;
    func(a,b);

    int ans = 0;

    ans = (a>b)? a:b;
    cout<<ans<<endl;

    a = a+ 3;
    b = b + 3;

    ans = (a>b)? a:b;
    cout<<ans<<endl;

    return 0;
}