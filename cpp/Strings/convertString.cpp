string convertString(string str)
{
    // WRITE YOUR CODE HERE
    //     size of the string "str"
    int n = str.length();
    // Change to upper case of the first word of the string
    str[0] = toupper(str[0]);
    // Traverse the string
    for (int i = 0; i < n; i++)
    {
        //    if the character is a space
        if (str[i] == ' ')
        {
            // Chnage the next character to upper case
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    return str;
}