#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100005];
    int b[100005];
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        // Tìm dãy con tang dài nh?t 
        cin >> a[i];
        b[a[i]] = b[a[i] - 1] + 1;
        res = max(res, b[a[i]]);
    }
    cout << n - res << endl;
}
