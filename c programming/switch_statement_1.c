// for Factorial, prime, odd, exit

#include <stdio.h>
int main()
{
    printf("Select Y to continue\nSelect N to stop");
    char Option;
    int n, i,a = 1;
    int val = 1;
    scanf("%c", &Option);
    do
    {
        printf("Following is the task list: \n");
        printf("For factorial press 1,\nFor prime number press 2.\nFor odd-even press 3.\n To exit press 4.\n");
        int num;
        printf("Choose the task: ");
        scanf("%d", &num);

        switch (num)
        {
        case 1:
            printf("factorial Calculator\nEnter a number to find factorial: ");
            
            scanf("%d", &n);
            if (n < 0)
            {
                printf("Factorial not defined!");
            }
            else
            {
                if (n == 0)
                {
                    printf("The factorial of %d is 1.", n);
                }
                else
                {
                    for (i = n; i > 1; i--)
                    {
                        val *= i;
                    }
                    printf("The factorial of %d is %d", n, val);
                }
            }
            break;

        case 2:
            printf("Prime detector\nEnter a number to detect: ");
            int prime;
            scanf("%d", &prime);

            for (int i = 2; i < prime; i++)
            {
                if (prime % i == 0)
                {
                    printf("The number %d is not a prime.", prime);
                }
                else
                {
                    printf("Your number is a prime.");
                }
            }
            break;

        case 3:
            printf("Odd-even detector\nEnter a number to detect: ");
            int find;
            scanf("%d", find);

            if (find % 2 == 0)
            {
                printf("Your number %d is even.", find);
            }
            else
            {
                printf("Your number %d is odd.", find);
            }

            break;

        case 4:
            printf("You exited the operator.");
            break;

        default:
            printf("Invalid operation");
            break;
        }
    } while (a == 0);

    return 0;
}