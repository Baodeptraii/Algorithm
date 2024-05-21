#include <bits/stdc++.h> // H?u t?
using namespace std;
using ll = long long;
int a[1005][1005];
int visited[1005];
int parents[1005];
vector<int> ke[1005];

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
		cin >> n >> m;
		memset(ke, 0, sizeof(ke));
		memset(visited, 0, sizeof(visited));
		memset(parents, 0, sizeof(parents));
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		for (int i = 1; i <= n; i++) {
			sort(ke[i].begin(), ke[i].end());
		}
		int tplt = 0;
		for(int i = 1; i <= n; i++) {
			if(!visited[i]) {
				tplt++;
				DFS(i);
			}
		}
		for(int i = 1; i <= n; i++) {
			memset(visited, 0, sizeof(visited));
			int res = 0 ;
			visited[i] = 1;
			for(int i = 1; i <= n; i++) {
				if(!visited[i]) {
					res++;
					DFS(i);
				}
			}
			if(res > tplt) {
				cout << i << " ";
			}
		}
		cout << endl;
	}
}
