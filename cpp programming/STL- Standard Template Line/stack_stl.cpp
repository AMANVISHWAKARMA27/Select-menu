#include <iostream>
#include<stack>

using namespace std;
int main()
{
    //This ia storage type , where data is arranged in the form of plates, the last placed one becomes the first and the first placed becomes the lasg
    stack<string> s;
    s.push("Aman");
    s.push("vishwakarma");
    s.push("Radhika");
    s.push("Kalanee");

    cout<<"Top element: "<<s.top()<<endl;
    s.pop();
    cout<<"Top element: "<<s.top()<<endl;

    cout<<"Size of stack: "<<s.size()<<endl;
    cout<<"emptyor not: "<<s.empty();

    return 0;
}