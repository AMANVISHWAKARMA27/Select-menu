#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    int b = 1;
    for (num; num>=1 ; num--)
    {
        b=b*num;
    }
    printf("The factorial is %d.",b);

    return 0;
}