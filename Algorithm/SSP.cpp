#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
//  Subset Sum Problem : Dãy con có t?ng b?ng S (SSP)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<bool> dp(s + 1, false);
        dp[0] = true;
        for (int i = 0; i < n; i++)
        {
            for (int j = s; j >= a[i]; j--)
            {
                if (dp[j - a[i]] == true)
                {
                    dp[j] = true;
                }
            }
        }
        if (dp[s])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
