#include <stdio.h>
#include <string.h>
int main()
{
    char ch[100];
    printf("Enter your string: ");
    scanf("%[^\n]s", ch);

    int count = 0;

    for ( int i = 0; i < strlen(ch); i++)
    {
        if ( ch[i] == ' ')
        count++;
    }

    printf("Number of words: %d", count+1);

    return 0;
}