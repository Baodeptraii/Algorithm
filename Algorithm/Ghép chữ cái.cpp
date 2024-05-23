// Edited by HVB
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

bool check(string s)
{
    if (s.find("EA") != -1 || s.find("AE") != -1 ) // Tìm đc "AE","EA" trong xâu
        return true;
    int pos_a = -1, pos_e = -1;
    for (int i = 0; i < s.length(); ++i)
        if (s[i] == 'A')
            pos_a = i; // Tìm vị trí của A
        else if (s[i] == 'E')
            pos_e = i; // Tìm vị trí của E
    if (pos_e == -1) // Nếu chỉ có A
        return pos_a == 0 || pos_a == s.length() - 1; // A ở đầu hoặc đít thì đúng 
    return abs(pos_a - pos_e) == s.length() - 1; // A ở đầu E ở đít hoặc ngược lại
}

int main()
{
    char c;
    cin >> c;
    string st;
    for (char i = 'A'; i <= c; ++i)
        st.push_back(i);
    do
        if (check(st))
            cout << st << endl;
    while (next_permutation(st.begin(), st.end()));
}
