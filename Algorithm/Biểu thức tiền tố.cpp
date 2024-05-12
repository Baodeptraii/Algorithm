#include <bits/stdc++.h> // Tiền tố
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.ignore();
        string s;
        cin >> s;
        stack<int> st;
        for (int i = s.size() - 1; i >= 0 ; i--)
        {
            if (isdigit(s[i]))
            {
                s[i] = s[i] - '0';
                st.push(s[i]);
            }
            else
            {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                int res = 0;
                if (s[i] == '+')
                {
                    res = a + b;
                }
                else if (s[i] == '-')
                {
                    res = a - b;
                }
                else if (s[i] == '*')
                {
                    res = a * b;
                }
                else if (s[i] == '/')
                {
                    res = a / b;
                }
                st.push(res);
            }
        }
        cout << (st.top()) << endl;
    }
}