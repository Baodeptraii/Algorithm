#include <bits/stdc++.h> //10 - Duong di BFS MLE
using namespace std;

int n, m, u, v;
vector<int> adj[1001];
bool visited[1001] = {false};
int par[1001] = {0};


void bfs() {
	queue<int> q;
	q.push(u);
	bool check = false;
	while (!q.empty()) {
		int tmp = q.front();
		q.pop();

		if (tmp == v) {
			check = true;
			break;
		}

		for (int x : adj[tmp]) {
			if (!visited[x]) {
				q.push(x);
				par[x] = tmp;
				q.push(x);
			}
		}
	}
	if (check) {
		stack<int> st;
		while (true) {
			st.push(v);
			if (v == u)
				break;
			v = par[v];
		}
		while (st.size()) {
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	} else {
		cout << -1 << endl;
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m >> u >> v;
		for(int i = 0; i<=n; i++) {
			adj[i].clear();
		}
		memset(visited, false, sizeof(visited));
		memset(par, 0, sizeof(par));
		for (int i = 0; i < m; i++) {
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			// adj[x].push_back(y);
		}

		bfs();
	}
}

