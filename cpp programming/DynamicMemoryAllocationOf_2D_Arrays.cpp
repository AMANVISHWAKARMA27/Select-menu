#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // //Creating a 2D array dynamically with same row and column
    // int n;
    // cin>>n;

    // int **arr = new int*[n];

    // for ( int i = 0; i < n; i++)
    // {
    //     arr[i] = new int[n];
    // }

    // //Taking Input
    // for ( int i = 0; i < n; i++ )
    // {
    //     for ( int j = 0; j < n; j++)
    //     {
    //         cin>> arr[i][j];
    //     }
    // }

    // //Getting Output
    // cout<<endl;

    // for ( int i = 0; i < n; i++ )
    // {
    //     for ( int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //Creating a 2D array dynamically with different row and column

    // int row, col;
    // cin>>row>>col;

    // int **arr = new int*[row];

    // for ( int i = 0; i < row; i++)
    // {
    //     arr[i] = new int[col];
    // }

    // //Taking Input
    // for ( int i = 0; i < row; i++ )
    // {
    //     for ( int j = 0; j < col; j++)
    //     {
    //         cin>> arr[i][j];
    //     }
    // }

    // //Getting Output
    // cout<<endl;

    // for ( int i = 0; i < row; i++ )
    // {
    //     for ( int j = 0; j < col; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // //When we've used the memory in heap, then its our duty to release/clean it manually.

    // //releasing memory
    // for( int i = 0; i < row; i++)
    // {
    //     delete [] arr[i];
    // }
    // delete []arr;

    // Jaggered Array through dynamic allocation

    // vector<vector<int>>jaggedArray;
    // jaggedArray.push_back({1,2,3});
    // jaggedArray.push_back({4,5});
    // jaggedArray.push_back({6,7,8,9});

    // for ( int i = 0; i < jaggedArray.size(); i++)
    // {
    //     for ( int j = 0; j < jaggedArray[i].size(); j++)
    //     {
    //         cout<< jaggedArray[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // // Code to create a jagged array dynamically

    // int row, column, num;

    // vector<vector<int>> a;

    // cout << "Enter number of rows: ";
    // cin >> row;

    // for (int i = 0; i < row; i++)
    // {
    //     cout << "Enter the number of column: ";
    //     cin >> column;
    //     vector<int> temp;

    //     for (int j = 0; j < column; j++)
    //     {
    //         cin >> num;
    //         temp.push_back(num);
    //     }
    //     a.push_back(temp);
    // }

    // cout<<endl;

    // for (int i = 0; i < row; i++)
    // {
    //     for (int j = 0; j < a[i].size(); j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    return 0;
}