/*Reading a file*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fs, *ft;
    char ch;

    fs = fopen("aman.c","w");

    if ( fs == NULL )
    {
        puts("Error!");
        exit(1);
    }
    ft = fopen("leapyear.c","r");

    if ( ft == NULL )
    {
        puts("Error!");
        exit(2);
    }

    while(1){
        ch = fgetc(ft);
        if ( ch == EOF )
        break;
        else
        fputc(ch,fs);
    }
    fclose(ft);
    fclose(fs);

    return 0;
}