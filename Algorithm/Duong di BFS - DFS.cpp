#include <bits/stdc++.h> // H?u t?
using namespace std;
using ll = long long;
int a[1005][1005];
int visited[1005];
int parents[1005];
vector<int> ke[1005];

void BFS(int s) {
	queue<int> q;
	q.push(s);
	visited[s] = 1;
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();
		// cout << tmp << " ";
		for (auto it : ke[tmp]) {
			if (!visited[it]) {
				parents[it] = tmp;
				visited[it] = 1;
				q.push(it);
			}
		}
	}
}

void DFS(int s) {
	visited[s] = 1;
	for (auto it : ke[s]) {
		if (!visited[it]) {
			parents[it] = s;
			visited[it] = 1;
			DFS(it);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, s, t;
		cin >> n >> m >> s >> t;
		memset(ke, 0, sizeof(ke));
		memset(visited, 0, sizeof(visited));
		memset(parents, 0, sizeof(parents));
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			// ke[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) {
			sort(ke[i].begin(), ke[i].end());
		}
		BFS(s);
		if (!visited[t]) {
			cout << -1 << endl;
		} else {
			vector<int> res;
			while (s != t) {
				res.push_back(t);
				t = parents[t];
			}
			res.push_back(s);
			reverse(res.begin(), res.end());
			for (auto x : res) {
				cout << x << " ";
			}
			cout << endl;
		}
	}
}
