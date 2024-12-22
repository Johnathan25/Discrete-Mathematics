#include <iostream>
#include <string>
#include <math.h>
using namespace std;
string alphabet = " ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string decription(string Str, int a, int b)   //"WEKWFCETNVDXZMNJDRV"       EXPECTED OUTPUT "TFBTAPFIMYKOERMGKSY"
{
    int c = 0;
    int p = 0;
    int a_inv;
    for (int k = 0;k < 27;k++)
    {
        if ((a * k) % 27 == 1)
        {
            a_inv = k;
            break;
        }
        else
            continue;
    }
    string massage = "";
    for (int i = 0;i < Str.length();i++)
    {
        if (Str[i] >= 97 && Str[i] <= 122)
            Str[i] = Str[i] - 32;
        for (int j = 0;j < alphabet.length();j++)       //find index of each character in dycrebted text
        {
            if (Str[i] == alphabet[j])
            {
                c = j;
                break;
            }
            else
                continue;
        }
        p = (a_inv * (c - b)) % 27;

        if (p > -26 && p < 0)
            p += 27;

        massage = massage + alphabet[p];
    }

    return massage;

}

