// Time Complexity : O(n)
string removeDuplicates(string str, int n)
{
    // Write your code here.
    bool arr[26] = {false};
    string ans;
    for (int i = 0; i < n; i++)
    {
        if (arr[str[i] - 97] != true)
        {
            arr[str[i] - 97] = true;
            ans += str[i];
        }
    }
    return ans;
}