#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int n, k;
int a[100000];
// Ð?m s? cách di b?c thang
int solve(int n, int k)
{
    memset(a, 0, sizeof(a));
    a[0] = a[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= min(i, k); j++)
        {
            a[i] += a[i - j];
            a[i] %= MOD;
        }
    }
    return a[n];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        cout << solve(n, k) << endl;
    }
}
