#include<iostream>
using namespace std;

void printarray(int arr[], int n)
{
    cout<<"{";
    for (int i = 0; i <=n; i++)
    {
        cout<<arr[i]<<" ";
       
    }
    cout<<"}";
    
}

void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if((i+1)<size)
        {
            swap(arr[i],arr[i+1]);
        }
    }
   
}
int main()
{
    //1. swap alternate
    int arrodd[5] = {1,2,7,8,5}; //odd array  , expected output {2,1,8,7,5}
    int arreven[6] = {1,2,3,4,5,6}; //even array  , expected output {2,1,4,3,6,5}
    
    swapalternate(arrodd,5);
    printarray(arrodd,5);
    
    swapalternate(arreven,6);
    printarray(arreven,5);

    return 0;
}