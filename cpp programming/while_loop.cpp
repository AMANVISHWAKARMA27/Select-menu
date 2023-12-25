//WHILE LOOP

#include <iostream>
using namespace std;

int main()
{ 
    int index = 1;  //mandatory and fixed line
    while(index <= 100) //calling while loop
    {
        cout<< index <<endl;
        index++; //increment, if we remove this statement then the loop will become infinite.
    }
    return 0;
}