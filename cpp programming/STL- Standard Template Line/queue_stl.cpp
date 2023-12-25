#include <iostream>
#include<queue>

using namespace std;
int main()
{
    queue<string> q;
    q.push("Aman");
    q.push("Vishwakarma");
    q.push("Radhika");
    q.push("Kalanee");

    cout<<"First Element: "<<q.front()<<endl;

    //all other functions are also same

    return 0;
}