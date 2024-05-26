#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using ll = long long;
using namespace std;

int main() {
    ll N;
    cin >> N;
    vector<pair<ll, ll>> v(N);
    for (ll i = 0; i < N; ++i) {
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(), v.end());

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll res = 0;

    for (auto x : v) {
        ll deadline = x.first;
        ll profit = x.second;

        if (pq.size() < deadline) {
            pq.push(profit);
            res += profit;
        } else if (!pq.empty() && pq.top() < profit) {
            res += profit - pq.top();
            pq.pop();
            pq.push(profit);
        }
    }

    cout << res << endl;
    return 0;
}
