#include <stdio.h>
# include <stdlib.h>
int main()
{
    FILE *fp;
    char ch ;
    fp = fopen( "file.txt", "r+");

    if ( fp == NULL )
    {
        printf("File not found!");
        exit(1);
    }
    int i = 0;
    while( i < strlen(ch))
    {

        if ( ch[i] == 'A' || ch[i] == 'B' || ch[i] == 'C' || ch[i] == 'D' || ch[i] == 'E' || ch[i] == 'F' || ch[i] == 'G' || ch[i] == 'H' || ch[i] == 'I' || ch[i] == 'J' || ch[i] == 'K' || ch[i] == 'L' || ch[i] == 'M' || ch[i] == 'N' || ch[i] == 'O' || ch[i] == 'P' || ch[i] == 'Q' || ch[i] == 'R' || ch[i] == 'S' || ch[i] == 'T' || ch[i] == 'U' || ch[i] == 'V' || ch[i] == 'W' || ch[i] == 'X' || ch[i] == 'Y' || ch[i] == 'Z')
    }

    return 0;
}