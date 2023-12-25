#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
                return 1;
        }
    }
    return 0;
}

void printColSum(int arr[][4], int row, int col)
{
    cout << "Printing sum -->" << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}



int main()
{
    /*2D array are like matrices where we can say that the elements are stored in the form of 2D arrays.
    Each row and colummn start from index 0.*/

    // We can define a 2D array as:
    // int array[m][n];// where m is the number of rows and n is the number of column.
    /*This will required an input as following:
    int arr[2][3] = {{1,2,3},
                      {4,5,6}}

    int arr[3][3] = {{1,2,3},
                     {4,5,6},
                     {7,8,9}}*/

    // taking input
    int arr[3][4];
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }
    // print
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    int target;
    cout << "Enter the element you want to search for: ";
    cin >> target;

    if (isPresent(arr, target, 3, 4))
        cout << "Element found!" << endl;
    else
        cout << "Not found!" << endl;

    printColSum(arr,3,4);

    //Binary search 



    return 0;
}
