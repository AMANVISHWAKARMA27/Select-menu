#include<iostream>
using namespace std;

int main()
{
    for(int i = 1; i<=100; i++)
    {
        bool is_prime = true;
        for(int j = 2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                cout<<i<<endl;
                is_prime = false;
                break;
            }
        }
        if(is_prime && i>1)
        {
            cout<<"prime ";
            cout<<i<<endl;

        }
    }
   
     
    return 0;
}