#include <bits/stdc++.h> // ugly
#define endl "\n"
using namespace std;
using ll = unsigned long int;

ll solve(ll n)
{
    ll a[n];
    ll i2,i3,i5;
    i2 = i3 = i5 = 0;
    a[0] = 1;
    for(int i= 1 ;i<n ;i++){
        a[i] = min( a[i2]*2, min(a[i3]*3, a[i5]*5));
        if(a[i] == a[i2]*2) i2++;
        if(a[i] == a[i3]*3) i3++;
        if(a[i] == a[i5]*5) i5++;
        // if(a[i] == a[i-1]) continue;
    }
    return a[n-1];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << solve(n) << endl;
    }
}