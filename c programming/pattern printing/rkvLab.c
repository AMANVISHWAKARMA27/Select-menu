#include <stdio.h>
#include <string.h>

int main()
{
    char ch[50];
    printf("Enter your string: ");
    scanf("%[^\n]s", ch);

    char *start = &ch[0]; 
    char *end = &ch[strlen(ch)-1];

    printf("The reverse of the string is: \n");

    for ( int i = strlen(ch)-1; i >= 0; i--)
    {
        printf("%c", ch[i]);
    }
    printf("\n");

    return 0;
}