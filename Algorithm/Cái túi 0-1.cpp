#include <bits/stdc++.h> // Cái túi
using namespace std;
using ll = long long;
int f[1005][1005];
int w[1005], v[1005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, V;
        cin >> n >> V;
        for (int i = 1; i <= n; i++)
            cin >> w[i];
        for (int i = 1; i <= n; i++)
            cin >> v[i];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= V; j++)
            {
                f[i][j] = f[i - 1][j];
                if (j >= w[i])
                {
                    f[i][j] = max(f[i][j], f[i - 1][j - w[i]] + v[i]);
                }
            }
        }
        cout << f[n][V] << "\n";
    }
}