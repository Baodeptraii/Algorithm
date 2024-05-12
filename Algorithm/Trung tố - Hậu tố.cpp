#include <bits/stdc++.h> // Trung hậu 
using namespace std;
using ll = long long;

int priority(char c)
{
    if (c == '^')
        return 3;
    if (c == '*' || c == '/')
        return 2;
    if (c == '+' || c == '-')
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string s;
        cin >> s;
        stack<char> st;
        string res = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]))
            {
                res += s[i];
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() && priority(s[i]) <= priority(st.top()))
                {
                    res += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while (!st.empty() && st.top() != '(')
        {
            res += st.top();
            st.pop();
        }
        st.pop();
        cout << res << endl;
    }
}