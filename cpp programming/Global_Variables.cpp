#include <iostream>
using namespace std;

int score = 5; //Global variable

void a(int &i)
{
    cout<<score<<" In a "<<endl;
}

void b(int &i)
{
    cout<<score<<" In b "<<endl;
}


int main()
{
    int i = 5;

    cout<<score<<" in main "<<endl;
    a(i);
    b(i);

    return 0;
}