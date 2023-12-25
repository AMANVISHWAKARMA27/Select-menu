#include <stdio.h>
#include <string.h>

int main()
{
    char ch[10];
    printf("Enter password: ");
    scanf("%[^\n]s", ch);

    int length = strlen(ch), count1 = 0, count2 = 0, count3 = 0;

    for (int i = 0; i < length; i++)
    {
        if (ch[i] == '0' || ch[i] == '1' || ch[i] == '2' || ch[i] == '3' || ch[i] == '4' || ch[i] == '5' || ch[i] == '6' || ch[i] == '7' || ch[i] == '8' || ch[i] == '9')
        {
            count1++;
        }
    }

    for (int i = 0; i < length; i++)
    {
        if (ch[i] == 'A' || ch[i] == 'B' || ch[i] == 'C' || ch[i] == 'D' || ch[i] == 'E' || ch[i] == 'F' || ch[i] == 'G' || ch[i] == 'H' || ch[i] == 'I' || ch[i] == 'J' || ch[i] == 'K' || ch[i] == 'L' || ch[i] == 'M' || ch[i] == 'N' || ch[i] == 'O' || ch[i] == 'P' || ch[i] == 'Q' || ch[i] == 'R' || ch[i] == 'S' || ch[i] == 'T' || ch[i] == 'U' || ch[i] == 'V' || ch[i] == 'W' || ch[i] == 'X' || ch[i] == 'Y' || ch[i] == 'Z')
        {
            count2++;
        }
    }
    
    for (int i = 0; i < length; i++)
    {
        if (ch[i] == 'a' || ch[i] == 'b' || ch[i] == 'c' || ch[i] == 'd' || ch[i] == 'e' || ch[i] == 'f' || ch[i] == 'g' || ch[i] == 'h' || ch[i] == 'i' || ch[i] == 'j' || ch[i] == 'k' || ch[i] == 'l' || ch[i] == 'm' || ch[i] == 'n' || ch[i] == 'o' || ch[i] == 'p' || ch[i] == 'q' || ch[i] == 'r' || ch[i] == 's' || ch[i] == 't' || ch[i] == 'u' || ch[i] == 'v' || ch[i] == 'w' || ch[i] == 'x' || ch[i] == 'y' || ch[i] == 'z')
        {
            count3++;
        }
    }
 
    if ( count1 > 0 && count2 > 0 && count3 > 0 )
    printf("1");
    else
    printf("0");
    

    return 0;
}