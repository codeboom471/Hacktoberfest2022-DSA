int makeBeautiful(string str)
{
    // Write your code here
    // size of the string str
    int n = str.size();
    //     take two variables to store the count for '1' & '0' to make string beautiful
    int res1 = 0;
    int res2 = 0;

    //     loop to count no flip required to make string beautiful when start with 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (str[i] != '0')
            {
                res1++;
            }
        }
        if (i % 2 != 0)
        {
            if (str[i] != '1')
            {
                res1++;
            }
        }
    }
    //         loop to count no flip required to make string beautiful when start with 1;

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 1)
        {
            if (str[i] != '0')
            {
                res2++;
            }
        }
        if (i % 2 != 1)
        {
            if (str[i] != '1')
            {
                res2++;
            }
        }
    }
    return min(res1, res2);
}