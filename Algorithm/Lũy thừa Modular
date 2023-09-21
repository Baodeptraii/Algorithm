#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}
// x mu y
ll power(ll x, ll y, ll mod) {
    ll res = 1;
    x = x % mod;
    while (y > 0) {
        if (y % 2 == 1) {
            res = (res * x) % mod; //y le thi nhan voi 1 x de y chan 
        }
        x = (x * x) % mod; // binh phuong x
        y /= 2; // y chia 2 vi x da binh phuong
    }
    return res;
}

int main() {
    faster();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll g = 0;
        ll h = 1;
        for (int i = 0; i < n; i++) {
            g = gcd(g, a[i]);
            h = (h * a[i]) % MOD;
        }
        ll res = power(h, g, MOD);
        cout << res << endl;
    }
    return 0;
}

