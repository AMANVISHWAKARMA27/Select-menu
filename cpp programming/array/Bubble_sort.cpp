#include<iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for( int i =1; i < n; i++)
    {
        bool swapped = false;//if not sorted
        //for round 1 to n-1
        for( int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false)
        break;//already sorted
    }
}
int main()
{
    // let arr[] = {10, 1, 7, 6, 14, 9}
    /*In Bubble sorting, we choose 2 consecutive elements of an array and comapre them. 
    If the second one is smaller than the first one, then they interchange their placces.
    This interchanes amongst the elements continues untill the whole array is sorted.*/
    
    //In Round 1, the first largest element will come to its right position.
    //In Round 2, the second largest element will come to its right position.
    //the number of round continues until the whole array is sorted.
    
    //In round 1, at first 14 and 9 will be swapped.
    //In round 2, 10 and 1; then 10 and 7; then 10 and 6; 10 and 9 will be interchanged.
    //In round 3, 9 will not swap with any number coz it is at its right place
    //In Round 4, now 7 will be swapped.
    //after this no more rounds will occurs because the array has been sorted.
    int arr[] = {10, 1, 7, 6, 14, 9};
    bubblesort(arr,6);

    for(int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    //Time complexety is O(n^2)
    //Space Complexity is O(1)

    return 0;
}