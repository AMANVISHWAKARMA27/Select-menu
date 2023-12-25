#include<stdio.h>
int main(){
    
    //Number right triangle
    int a;
    printf("Enter number of rows: ");
    scanf("%d",&a);
    
    for (int i = 1; i <= a; i++) //number of rows
    {
        for(int j = 1; j <=i;j++) //number of columns 
        {
            printf("%d ",j);
        }
        printf("\n"); //space after every line run
    }

    //Reverse number right triangle
    int b;
    printf("Enter number of rows: ");
    scanf("%d",&b);
    
    for (int i = -b; i <= -1; i++) //number of rows
    {
        for(int j = 1; j <=-i;j++) //number of columns 
        {
            printf("%d ",j);
        }
        printf("\n"); //space after every line run
    }

    //Odd number right triangle
    // int c;
    // printf("Enter number of rows: ");
    // scanf("%d",&c);

    // for (int i = 1; i<=c; i++)
    // {
    //     c = 1;
    //     for (int j = 1; j<=2*c-1; j++)
    //     {
    //         printf("%d",c);
    //         c = c+2;  
    //     }
    //     printf("\n");
    // }

    return 0;
}