// using Recursion
bool Palindrome(string &s, int start, int end)
{
    //    base case
    if (start >= end)
    {
        return 1;
    }
    //     condition
    if (s[start++] != s[end--])
    {
        return 0;
    }
    //     recursive call
    Palindrome(s, start, end);
}

bool isPalindrome(string &s)
{
    // Write your code here.
    int n = s.length();
    return Palindrome(s, 0, n - 1);
}