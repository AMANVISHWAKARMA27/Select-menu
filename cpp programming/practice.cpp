#include <iostream>
using namespace std;

string intToRoman(int num)
{
    string a, b, c, d, e, f, g, h, i, j, k, l, m;

    int num1 = num / 1000;
    if (num1 == 1)
        a = "M";
    else if (num1 == 2)
        a = "MM";
    else if (num1 == 3)
        a = "MMM";
    int rest1 = num % 1000;

    int num2 = rest1 / 900;
    if (num2 == 1)
        b = "CM";
    int rest2 = rest1 % 900;

    int num3 = rest2 / 500;
    if (num3 == 1)
        c = "D";
    int rest3 = rest2 % 500;

    int num4 = rest3 / 400;
    if (num4 == 1)
        d = "CD";
    int rest4 = rest3 % 400;

    int num5 = rest4 / 100;
    if (num5 == 1)
        e = "C";
    else if (num5 == 2)
        e = "CC";
    else if (num5 == 3)
        e = "CCC";
    int rest5 = rest4 % 100;

    int num6 = rest5 / 90;
    if (num6 == 1)
        f = "XC";
    int rest6 = rest5 % 90;

    int num7 = rest6 / 50;
    if (num7 == 1)
        g = "L";
    int rest7 = rest6 % 50;

    int num8 = rest7 / 40;
    if (num8 == 1)
        h = "XL";
    int rest8 = rest7 % 40;

    int num9 = rest8 / 10;
    if (num9 == 1)
        i = "X";
    else if (num9 == 2)
        i = "XX";
    else if (num9 == 3)
        i = "XXX";
    int rest9 = rest8 % 10;

    int num10 = rest9 / 9;
    if (num10 == 1)
        j = "IX";
    int rest10 = rest9 % 9;

    int num11 = rest10 / 5;
    if (num11 == 1)
        k = "V";
    int rest11 = rest10 % 5;

    int num12 = rest11 / 4;
    if (num12 == 1)
        l = "IV";
    int rest12 = rest11 % 4;

    if (rest12 == 1)
        m = "I";
    else if (rest12 == 2)
        m = "II";
    else if (rest12 == 3)
        m = "III";

    return a + b + c + d + e + f + g + h + i + j + k + l + m;
}

int main()
{
    int num;
    cin>>num;

    cout<<intToRoman(num);

    return 0;
}