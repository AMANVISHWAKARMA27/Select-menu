#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number";
    cin>>number;

    for(int i = 2; i < number ; i++)
    {
        if(number%i == 0)
        {
            cout<<"Non-Prime";
            break;
        }
        else
        {
            cout<<"Prime";
            break;
        }
    }


    return 0;
}