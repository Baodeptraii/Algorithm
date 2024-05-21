#include <bits/stdc++.h> // H?u t?
using namespace std;
using ll = long long;
int visited[1005];
vector<int> ke[1005];
int parent[1005];
int check = 0;
void DFS(int u) {
	visited[u] = 1;
	for (auto it : ke[u]) {
		if(visited[it] == 1 && it != parent[u]) {
			check = 1;
		}
		if (!visited[it]) {
			parent[it] = u;
			DFS(it);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		memset(ke, 0, sizeof(ke));
		memset(visited, 0, sizeof(visited));
		memset(parent, 0, sizeof(parent));
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) {
			sort(ke[i].begin(), ke[i].end());
		}
		check = 0;
		for (int i = 1; i <= n; i++) {
			if(!visited[i]) {
				DFS(i);
			}
		}
		if(check == 1) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
}
