#include<iostream>
using namespace std;

//volume of cube
int vol(int a)
{
    return a*a*a;
}
//volume of cone
float vol(int r, int h)
{
    return ((0.333)*(3.14)*r*r*h);
}
//volume of cuboid
int vol(int l, int b, int h)
{
    return l*b*h;
}

int main(){
    
    cout<<"Volume of cone: "<<vol(3,2)<<endl;
    cout<<"Volume of cuboid: "<<vol(2,3,5)<<endl;
    cout<<"Volume of cube: "<<vol(6)<<endl;
    
    return 0;
}
