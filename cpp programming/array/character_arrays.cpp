#include <iostream>
#include <vector>
using namespace std;

int getlength(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
        count++;

    return count;
}

// 2. void reverse( char arr[], int n)
//  {
//      int s =0;
//      int e = n-1;
//      while(s<e)
//      {
//          swap(arr[s++],arr[e--]);
//      }
//  }

// 3. void reverseString( vector<char>& s)
//  {
//      int st = 0;
//      int e = s.size()-1;

//     while(st<e)
//     {
//         swap(s[st++],s[e--]);
//     }
// }

bool checkpalindrome(char arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        if (arr[start] != arr[end])
        {
            return 0;
        }
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    // strings: 1-d character arrays.
    char name[20];
    cout << "Enter your name: ";
    cin >> name;

    // cout << "Your name: " << name << endl;

    // name[2]='\0';

    // cout<<"Your name: "<<name<<endl;

    // 1: Find the length of an array.
    int len = getlength(name);

    // //2: Reverse the array.
    // reverse(name,len);
    // cout<<name<<endl;

    // 3. Reverse a string array.

    // char ch[10] = {'a','b','c','d','e','f','g','h','i','j'};
    // reverseString(ch);
    // cout<<ch<<endl;

    //Palindrome

    cout << "Palindrome or not: " << checkpalindrome(name, len)<<endl;
    

    return 0;
}