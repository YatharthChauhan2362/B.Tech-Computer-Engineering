// Code By 20DCE019 - Yatharth Chauhan

/*
Balanced String Parentheses

Chef has a string S which contains only the characters '{', '}', '[', ']', '(' and ')'. Now Chef wants to know if the given string S is balanced or not. If S is balanced then print 1, otherwise print 0.

A balanced parenthesis string is defined as follows:

The empty string is balanced
If P is balanced then (P), {P}, [P] is also balanced
If P and Q are balanced PQ is also balanced
For example "([])", "({})[()]" are balanced parenthesis strings while "([{]})", "())" are not balanced.

Input:
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.

Output:
For each test case, print a single line containing the answer.

Constraints
1≤T≤10
1≤|S|≤105
Example Input

4
()
([)]
([{}()])[{}]
[{{}]

Example Output
1
0
1
0

Explanation

Example case 1: "()" is a balanced string.
Example case 2: "([)]" is not a balanced string as the subset of brackets enclosed within '(' and ')' is not balanced.

*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbols = {{'[', -1}, {'(', -2}, {'{', -3}, {']', 1}, {')', 2}, {'}', 3}};
string balanced(string s)
{
    stack<char> st;
    for (char bracket : s)
    {
        if (symbols[bracket] < 0)
        {
            st.push(bracket);
        }
        else
        {
            if (st.empty())
                return "0";
            char top = st.top();
            st.pop();
            if (symbols[top] + symbols[bracket] != 0)
            {
                return "0";
            }
        }
    }
    if (st.empty())
    {
        return "1";
        return "0";
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << balanced(s) << endl;
    }
    return 0;
}