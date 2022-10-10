#include <bits/stdc++.h>
// conversion of upper case to lower case
char tolowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z' || (ch >= 0 && ch <= 9))
        return ch;
    else
    {
        ch = ch - 'A' + 'a';
        return ch;
    }
}

bool checkPalindrome(string s)
{
    // Write your code here.
    int i = 0;
    int j = s.length() - 1;
    while (i <= j)
    {
        if (isalnum(s[i]) == 0)
            i++;
        else if (isalnum(s[j]) == 0)
            j--;
        else if (tolowercase(s[i]) != tolowercase(s[j]))
            return false;
        else
        {
            i++;
            j--;
        }
    }
    return true;
}