//WRITE A PROGRAM TO CHECK THE GIVEN YOUR IS LEAP OR NOT

#include<stdio.h>
int main()
{
    int year;
    printf("ENTER THE YEAR: ");
    scanf("%d", &year);

    if((year%400 == 0) || (year%4 ==0 && year%100 !=0)){ //condition for leap year
        printf("leap year");

    }
    else{
        printf("Non leap year");

    }

    return 0;
}