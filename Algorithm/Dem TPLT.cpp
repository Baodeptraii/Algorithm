#include <bits/stdc++.h> // H?u t?
using namespace std;
using ll = long long;
int a[1005][1005];
int visited[10005];
vector<int> ke[10005];
void DFS(int s) {
	visited[s] = 1;
	// cout << s << " ";
	for (auto it : ke[s]) {
		if (visited[it] == 0)
			DFS(it);
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, m, s;
		cin >> n >> m ;
		memset(ke, 0, sizeof(ke));
		memset(visited, 0, sizeof(visited));
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) {
			sort(ke[i].begin(), ke[i].end());
		}
		int cnt = 0 ;
		for(int i = 1; i <=n ; i++) {
			if(!visited[i]) {
				cnt++;
				DFS(i);
			}
		}
		cout << cnt << endl;
	}
}
