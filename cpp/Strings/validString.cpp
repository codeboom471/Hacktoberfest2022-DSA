bool checkValidString(string &s)
{
    // Write your code here.
    int n = s.length() - 1;
    int open = 0;
    int close = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '*')
        {
            open++;
        }
        else
        {
            open--;
        }
        if (s[n - i] == ')' || s[n - i] == '*')
        {
            close++;
        }
        else
        {
            close--;
        }
        if (open < 0 || close < 0)
        {
            return false;
        }
    }
    return true;
}