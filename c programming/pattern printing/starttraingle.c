#include<stdio.h>
int main()
{
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    
    for (int i = 1; i <= a; i++) //number of rows
    {
        for(int j = 1; j <=i;j++) //number of columns 
        {
            printf(" *");
        }
        printf("\n"); //space after every line run
    }

    printf(" ");

    int b;
    printf("Enter number of rows: ");
    scanf("%d",&b);
    
    for (int i =-b; i <= -1; i++) //number of rows
    {
        for(int j = 1; j <=-i;j++) //number of columns 
        {
            printf(" *");
        }
        printf("\n"); //space after every line run
    }


 return 0;
}