
#include<stdio.h>
int main(){

    int a;
    printf("enter");
    scanf("%d",&a);
    int b = 1;
    for(a; a>=1; a--)
    {
        b = b*a;   
    }
    printf("%d", b);
    return 0;
}