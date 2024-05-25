#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(ll ts, ll ms)
{
    if (ts == 0 || ms == 0)
        return;
    if (ts % ms == 0)
    {
        cout << ts / ms;
        return;
    }
    if (ms % ts == 0)
    {
        cout << "1/" << ms / ts;
        return;
    }
    if ( ts > ms) {
        cout << ts / ms << " + ";
        solve(ts % ms, ms);
        return; 
    }
    ll x = ms / ts + 1;
    cout << "1/" << x << " + ";
    solve( ts * x - ms, ms*x );
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll ts, ms;
        cin >> ts >> ms;
        solve(ts, ms);
        cout << endl;
    }
}
