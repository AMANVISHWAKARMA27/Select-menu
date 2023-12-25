#include<stdio.h>
int main()
{
    //stars in straight horizontal line
    int a;
    printf("Enter the number of stars: ");
    scanf("%d",&a);

    for (int i = 1; i <= a; i++)
    {
        printf("*");
    }

    printf(" ");
    printf(" ");

    //stars in a vertical line
    int b;
    printf("\nEnter the number of stars: ");
    scanf("%d",&b);

    for (int i = 1; i <= b; i++)
    {
        printf("*\n");
    }

    printf(" ");
    printf(" ");

    //stars in nested loops

    //horizontal
    int c,d;
    printf("\nEnter the number of stars: ");
    scanf("%d %d",&c,&d);

    for (int i = 1; i <= c; i++) 
    {
        for(int j = 1; j <=d;j++)
        {
            printf("*");
        }
    }

    printf(" ");
    printf(" ");

    //vertical
    int e,f;
    printf("\nEnter the number of stars: ");
    scanf("%d %d",&e,&f);

    for (int i = 1; i <= e; i++) 
    {
        for(int j = 1; j <=f;j++)
        {
            printf("*\n");
        }
    }

    printf(" ");
    printf(" ");

    //2D patterns
    int g,h;
    printf("Enter number of rows: ");
    scanf("%d",&g);
    printf("Enter number of columns: ");
    scanf("%d",&h);
    for (int i = 1; i <= g; i++) //number of rows
    {
        for(int j = 1; j <=h;j++) //number of columns 
        {
            printf(" *");
        }
        printf("\n"); //space after every line run
    }
    
 return 0;
}