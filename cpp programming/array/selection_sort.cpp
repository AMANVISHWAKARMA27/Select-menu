#include<iostream>
using namespace std;

void selectionsort( int arr[], int n)
{
    for( int i = 0; i < (n-1); i++)
    {
        int minIndex = i; //assuming the starting value to be as minimum

        for( int j = (i+1); j<n; j++) //to find the minimum of the values, we have to fixed the first value and suppose it to be minimum. Then, 
        //we run a loop to find the minimum among the leftover values. Since, initially we're standing at some index i, we will run the another loop from (i+1).
        {
            if( arr[minIndex]> arr[j])
            {
                minIndex = j;
            }
        }
        swap( arr[minIndex], arr[i]);
    }
}

int main()
{
    //arr[] = {1,7,9,2,3,0}
    //after sorting the array becomes;
    //arr[] = {0,1,2,3,7,9}
    //Sorting mean arranging the elements of an array in ascending or descending order.
    /*In selection sorting, there are certain rounds and in each round, we take the samallest left over element
    and place it at its rights place; basically in chronological order.*/
    
    // Suppose we've an array; 64, 25, 12, 22, 11
    //Round 1: taking the smallest value and interchanging it with the first one... 11, 25, 12, 22, 64
    //Round 2: taking the second smallest number and interchanging it with the second element...11, 12, 25, 22, 64
    //Round 3: taking the 3rd smallest value and interchanging it with the third one....11, 12, 22, 25, 64
    //Round 4: taking the 4th smallest value and changing it with the fourth one...11, 12, 22, 25, 64
    //Now we can see that the array has sorted
    //Hence for 5 elements we have 4 rounds. This implies that for n elelmts in an array, we've (n-1) rounds.
    int arr[] = { 6, 4, 3, 8, 10};

    selectionsort(arr,5);

    for(int i = 0; i < 5; i++)
    {
        cout<<"The sorted array is: "<<arr[i]<<" ";
    }

    //Space Complexity: In this code, we have just made variable and not needed any extra space. For such variable the space is constant. Hence, the Space Complexity of Selection Sorting is O(1).
    //Time Complexity: For an array of size n, we've 1,2,3........,(n-2),(n-1) comparisions. Thus the total time is (n^2-n)/2. Hence, the time complexity is O(n^2).

    return 0;
}