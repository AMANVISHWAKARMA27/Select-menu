#include <iostream>
using namespace std;

void insertionsort(int arr[], int size)
{
    for (int i = 1; i < size; i++) // first element has been assumed to be sorted, that's why we are running the code from 1st index ie 2nd element.
    {
        int temp = arr[i], j;
        for (j = (i - 1); j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // get out
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main()
{
    // This kind of sorting is bery simple where we have to keep in mind the cards pattern.
    // Suppose we have a number(say 4), since it is a single number, we can say it is already sorted
    // Now say we have another number (say 6). We will comapre it with the previous one and decide whether to keep the second number on the left or right side of the first.

    int arr[6] = {3, 4, 2, 6, 5, 8};

    insertionsort(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    // constant space complexity
    // O(n^2) time complexity
    return 0;
}