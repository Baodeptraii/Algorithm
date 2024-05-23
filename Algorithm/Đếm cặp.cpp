// Edited by HVB
#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        map<int, int> mpa;
        map<int, int> mpb;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mpa[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mpb[b[i]]++;
        }
        int cnt = 0;
        for (auto x : mpa)
        {
            for (auto y : mpb)
            {
                if( y.first*log(x.first) > x.first*log(y.first)){
                    cnt += x.second*y.second;
                }
            }
        }
        cout << cnt << endl;
    }
}
