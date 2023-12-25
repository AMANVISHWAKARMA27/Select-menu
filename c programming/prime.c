#include <stdio.h>
int main()
{
    int prime;
    printf("Enter a number: ");
    scanf("%d", &prime);

    for (int i = 2; i < prime; i++)
    {
        if (prime % i == 0)
        {
            printf("The number is not a prime.");
            break;
        }
        else
        {
            printf("The number is a prime.");
            break;
        }
    }

    return 0;
}