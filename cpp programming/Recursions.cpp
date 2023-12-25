#include <iostream>
using namespace std;

int factorial(int n)
{
    // base case
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
}

int powerOfTwo(int index)
{
    // base case
    if (index == 0)
        return 1;

    return 2 * powerOfTwo(index - 1);
}

int print(int n)
{
    if (n == 0)
        return 0;

    cout << n << " ";

    return print(n - 1);
}

int factorize(int m, int n)
{
    int original = m;

    if (n == 1)
        return 1;

    if (original % n == 0)
        cout << n << " ";

    return factorize(original, n - 1);
}

int fibonacci(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

bool checkSorted(int arr[], int n)
{

    if (n == 0 || n == 1)
        return true;

    if (arr[0] > arr[1])
        return false;
    else
        return checkSorted(arr + 1, n - 1);
}

int sum(int arr[], int n)
{

    if (n == 0)
        return 0;

    if (n == 1)
        return arr[0];

    int remain = sum(arr + 1, n - 1);
    int sum = arr[0] + remain;
    return sum;
}

void reverse(string &str, int i, int j)
{
    if (i > j)
        return;

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i, j);
}

int main()
{
    // //Finding factorial of a number using recursions.

    // int n;
    // cin>>n;

    // int ans = factorial(n);
    // cout<<ans<<endl;

    // //Finding power of two

    // int power;
    // cin>>power;

    // int ans1 = powerOfTwo(power);
    // cout<<ans1<<endl;

    // // Printing number in reverse order using recursion
    // int num;
    // cin >> num;

    // int ans2 = print(num);
    // cout << ans2 << endl;

    // //Printing factors of a number
    // int num1;
    // cin>>num1;

    // int ans2 = factorize(num1, num1);
    // cout<<ans2<<endl;

    // //Fibonacci Series
    // int n;
    // cin>>n;

    // cout<<fibonacci(n)<<endl;

    // //Is given array sorted or not.

    // int arr[6] = {1,2,3,4,5,6};
    // if( checkSorted(arr,6) == true)
    // cout<<"yes"<<endl;
    // else
    // cout<<"No"<<endl;

    // //Sum of elements of an array

    // int brr[6] = {2,3,4,5,6,7};
    // cout<<sum(brr,6)<<endl;

    // // Return reverse of a string

    // string name = "abcde";
    // reverse(name, 0, name.length() - 1);
    // cout<< name;

    // return 0;
}