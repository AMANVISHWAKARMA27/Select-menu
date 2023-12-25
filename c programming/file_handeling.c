#include <stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp;
    char fname[20], lname[20],g,ch,str[20];
    int age;

    fp = fopen("Data.txt","w");
    if( fp == NULL){
        printf("Eror");
        exit(1);
    }
    
    // printf("Enter a character");
    // // scanf("%c",&ch);
    // // gets(str);
    // // fputc(ch,fp);
    // fputc(str,fp);

    printf("Enter your first name\n");
    gets(fname);
    printf("Enter your last name\n");
    gets(lname);
    printf("Enter your gender(M/F)\n");
    scanf("%c",&g);
    printf("%d",&age);

    fprintf(fp, "%s %s %c %d\n", fname, lname, g, age);
    
}