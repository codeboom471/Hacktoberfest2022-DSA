bool isValidParenthesis(string expression)
{
    // Write your code here.
    stack<char> s;
    int n = expression.length();
    for (int i = 0; i < n; i++)
    {
        // checking if we found a parenthesis then pushing into stack ds
        if (expression[i] == '[' || expression[i] == '(' || expression[i] == '{')
        {
            s.push(expression[i]);
        }
        else
        {
            // else case if satck is empty then return false
            if (s.empty())
            {
                return false;
            }
            // checking different parenthesis and poping them from stack
            else if (expression[i] == '}' && s.top() == '{')
            {
                s.pop();
            }
            else if (expression[i] == ')' && s.top() == '(')
            {
                s.pop();
            }
            else if (expression[i] == ']' && s.top() == '[')
            {
                s.pop();
            }
            else
            {
                s.push(expression[i]);
            }
        }
    }
    // if stack is empty then return true else false
    if (s.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}