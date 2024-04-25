#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
int n, k;
long long a[1005][1005];
// Tam giác Pascal d? tính t? h?p ch?p k c?a n
void nCk()
{
    a[1][0] = 1;
    a[1][1] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if(j == 0 || j == i){
                a[i][j] = 1;
            } else {
                a[i][j] = (a[i-1][j-1] + a[i-1][j] ) % (MOD);  
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        nCk();
        cout << a[n][k] << endl;
    }
}
