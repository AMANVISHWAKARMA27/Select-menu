#include<iostream>
using namespace std;

//we can also make funtion as follows to print the elements of an array
// void printarray(int arr[],int size)
// {
//     cout<<"Prinitng started"<<endl;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<"printing done"<<endl;
// }

//Get maximum
// int getmax(int num[], int n)
// {
//     int max = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i]>max)
//         {
//             max = num[i];
//         }
        
//     }
//     return max;
    
// }

//get maximum
// int getmin(int num[], int n)
// {
//     int min = INT_MAX;
//     for (int i = 0; i < n; i++)
//     {
//         if (num[i]<min)
//         {
//             min = num[i];
//         }
        
//     }
//     return min;
    
//}


//SCOPING
// void update(int arr[], int n){
//     cout<<"Inside the function."<<endl;
//     arr[0]=120;
//     //printing the array
//     for (int i = 0; i<3; i++)
//     {
//         cout<<arr[i]<<" ";
//     }cout<<endl;
    

//     cout<<"Going back to main function."<<endl;
// }

//LINEAR SEARCH
// bool search(int arr[], int size , int key){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==key)
//         {
//             return 1;
//         }
        
//     }
//     return 0;
    
// }

//REVERSE AN ARRAY
// void reverse(int arr[], int n)
// {
//     int start = 0;
//     int end = n-1;
//     while(start<=end)
//     {
//         swap(arr[start], arr[end]); //swap is an in-built function works as the name implies.
//         start++;
//         end--;
//     }

// }


int main()
{
    //Array: This is a type of list in which e can include same type of items
    //The values that are listed in arrays are stored in contaguous locations
    //Using arrays, we can store any number of same type of values in a single variable
    
    //following is the way to declare an array;
    // int ar[10]={1,2,3,4,5,6,7,8,9,10}; //This declared array can store 10 integers
    // cout<<ar[0]<<endl; // accessing a value from the array using index
    //  // if the size of array is n; then the indeices will range from 0 to (n-1)
    // cout<<"The value os 4th element: "<<ar[3]<<endl;
    // cout<<ar[11]<<" (garbage value printed)"<<endl; // since the array has no space for the 12th elememnt, it will throw some garbage value

    //printing all the values using loop
    // for (int i = 0; i <=9; i++)
    // {
    //     cout<<ar[i]<<endl;
    // }
    
    // int n = 3;
    // printarray(ar, 10); //called the function to print an array
    // cout<<"Size of array"<<sizeof(ar)/sizeof(int);//the actual size of the array

    //To find max and min of the int elements in an array
    // int size;
    // cout<<"Enter size: ";
    // cin>>size;

    // int num[100];
    // for ( int i = 0; i < size; i++)
    // {
    //     cout<<"enter the value of "<<(i+1)<<" element.";
    //     cin>>num[i];
    // }

    // cout<<"The maximum value is: "<<getmax(num,size)<<endl;
    // cout<<"The manimum value is: "<<getmin(num,size)<<endl;
    
    //SCOPING
    // int arr[3] = {1,2,3};

    // update(arr, 3);
    // //printing the array
    // for (int i = 0; i<3; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }cout<<endl;
     
    //LINEAR SEARCH
    // int arr[10]={3,-2,6,7,-4,5,9,1,-6,4};
    // cout<<"enter the element to search for "<<endl;
    // int key;
    // cin>>key;

    // bool found = search(arr,10,key);

    // if(found)
    // {
    //     cout<<"key is present."<<endl;
    // }
    // else
    // {
    //     cout<<"key is absent."<<endl;
    //}

    //REVERSE AN ARRAY
    // array = {1,2,3,4,5,6}     reverse array = {6,5,4,3,2,1}
    // array = {2,4,6,8,0}      reverse array = {0,8,6,4,2}
    // There can be two situations: odd list and even list

    // int arr[6] = {1,2,3,4,5,6};//even array
    // int array[5] = {1,2,3,4,5};//odd array

    // reverse(arr,6);
    // reverse(array,5);

    // printarray(arr,6);
    // printarray(array,5);
    
    // return 0;
}