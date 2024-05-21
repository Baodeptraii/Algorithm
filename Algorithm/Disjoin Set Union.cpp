#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int parent[100006], sz[100006];
int n, m;
int ans;

void ktao() {
	for (int i = 1; i <= n; i++) {
		parent[i] = i;
		sz[i] = 1;
	}
}

int Find(int u) {
	if (u == parent[u]) {
		return u;
	} else {
		return parent[u] = Find(parent[u]);
	}
}

bool Union(int u, int v) {
	u = Find(u);
	v = Find(v);
	if (u == v) {
		return false;
	}
	if (sz[u] > sz[v]) {

		parent[v] = u;
		sz[u] += sz[v];
		ans = max(ans, sz[u]);
	} else {
		parent[u] = v;
		sz[v] += sz[u];
		ans = max(ans, sz[v]);
	}
	return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		ans = 0;
		cin >> n >> m;
		ktao();
		ll res = 0;
		for (int i = 0; i < m; i++) {
			int u, v;
			cin >> u >> v;
			Union(u,v);
		}
		cout << ans << endl;
	}
	return 0;
}
