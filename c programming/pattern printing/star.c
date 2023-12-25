#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of cols: ");
    scanf("%d",&n);

    int c = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", c++);
        }
        printf("\n");
    }

    return 0;
}