#include<stdio.h>

int primenum(int n)
{
    int a;
    if(a<=1)
    {
        return 0;
    }
    for (int i = 2; i*i <= n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;   
}
int main(){
    
    for (int j = 2; j<=300; j++)
    {
        if(primenum(j))
        {
            printf("%d\n",j);
        }
    }
    
    return 0;
}