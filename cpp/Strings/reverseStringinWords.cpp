
string reverseWords(string s)
{
    int start = 0;
    for (int i = 0; i <= s.size(); i++)
    {
        if (s[i] == ' ' || i == s.size())
        {
            int end = i - 1;
            while (start < end)
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    return s;
}

string reverseOrderWords(string str)
{
    // Write your code here
    str = reverseWords(str);
    int start = 0;
    int end = str.size() - 1;
    while (start < end)
    {
        swap(str[start], str[end]);
        start++;
        end--;
    }
    return str;
}