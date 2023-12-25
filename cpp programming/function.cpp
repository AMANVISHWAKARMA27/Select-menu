#include<iostream>
using namespace std;

int sum(int num1, int num2)
{
    int c = num1+num2;
    return c;
}

int main()
{ 
    int num1,num2;
    cout<<"enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    cout<<"The sum is "<<sum(num1,num2);

    return 0;
}