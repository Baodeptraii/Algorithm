#include <bits/stdc++.h>
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
        stack<string> st;
        for (int i = s.size()-1; i >= 0; i--)
        {
            if (isalpha(s[i]))
            {
                string tmp = string(1, s[i]);
                st.push(tmp);
            }
            else
            {
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string res = "(" + a + s[i] + b + ")";
                st.push(res);
            }
        }
        cout << st.top() << endl;
    }
}