#include <stdio.h>

int add(int b[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += b[i];
    }
    return sum;
}
int main()
{
    // 2d array
    int arr[3][4] = {{1, 2, 3, 4},
                     {2, 3, 4, 5},
                     {3, 4, 5, 6}};

    // 3d array
    int arra[2][2][2] = {{{1, 2},
                          {2, 3}},
                         {{3, 4},
                          {3, 5}}};

    int *p = &arr[0];
    p = p + 3;
    printf("%d", p);

    int a[5] = {5, 16, 7, 89, 45};

    int *p = &a[0];
    // printf("%d", *(p++));
    printf("%d", *(++p));

    int[] = {5, 16, 7, 89, 45, 32, 23, 10};
    int *p

        array function int a[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(a) / sizeof(a[0]);
    printf("%d", add(a, len));

    Character Array char name[] = {'R', 'A', 'j', ' ', 'K', 'U', 'M', 'A', 'R'};
    printf("%s\n", name);

    char fullname[40];
    char fname[] = "RAJ";
    char lname[] = "KUMAR";

    printf("Enter your full name: ");
    scanf("%s", fullname);
    scanf("%[^\n]s", fullname); // use tp print full name with space also
    gets(fullname);             // Overwrite on the later memory irrespective of the size of the defined array.

    printf("%c\n", name[2]);
    printf("%c %c \n", fname[2], lname[3]);

    printf("%s", fullname);

    return 0;
}