#include <bits/stdc++.h> // Nhà
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n + 3], f[n + 3] = {};
        for (int i = 3; i <= n + 2; i++)
        {
            cin >> a[i];
            f[i] = max(f[i - 2], f[i - 3]) + a[i];
        }
        cout << max(f[n + 2], f[n + 1]) << endl;
    }
}

/*
2
6
5 5 10 100 10 5
4
3 2 7 10
*/