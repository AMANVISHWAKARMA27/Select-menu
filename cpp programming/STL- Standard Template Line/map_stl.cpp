#include<iostream>
#include<map>

using namespace std;

int main()
{
    //It works like functions in mathematics. It consists of keys and each key points to only one value, but one values can have more than one keys.
    
    map<int,string> a;

    a[1] = "Aman";
    a[2] = "vishwakarma";
    a[3] ="Rishi";
    a[4] = "Mukherjee";

    for(auto i:a)
    {
        cout<<i.first<<endl;
    }


    return 0;
}