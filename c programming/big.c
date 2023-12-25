#include<stdio.h>
int main()
{
    
    int num1,num2,num3,option;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the first number : ");
    scanf("%d",&num2);
    printf("Enter the first number : ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num3)
    {
        option = 1;
    }
    else if(num2>num1 && num2>num3)
    {
        option = 2;
    }
    else if(num3>num1 && num3>num2)
    {
        option = 3;
    }
    
    switch (option)
    {
    case 1:
        printf("The greatest number is %d.",num1);
        break;
    
    case 2:
        printf("The greatest number is %d.",num2);
        break;
    
    case 3:
        printf("The greatest number is %d.",num3);
        break;

    default:
        printf("Invalid input!");
    }

    return 0;
}