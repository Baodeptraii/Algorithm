#include <bits/stdc++.h> // Hậu trung
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
        for(int i=0;i<s.length();i++){
            if(isalpha(s[i])){
                st.push(string(1, s[i]));
            } else {
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                st.push('(' + op2 + s[i] + op1 + ')');
            }
        }
        cout<<st.top()<<endl;
    }
}