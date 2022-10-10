// Time Complexity : 0(N)
string replaceSpaces(string &str)
{
    // Write your code here.
    // create new temp empty string
    string temp = "";
    // looping elements
    for (int i = 0; i < str.length(); i++)
    {
        // condition if space is there then remove from @40
        if (str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        // else case leave it as it is
        {
            temp.push_back(str[i]);
        }
    }
    // retruning the temp string
    return temp;
}