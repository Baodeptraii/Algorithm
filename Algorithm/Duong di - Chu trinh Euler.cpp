#include <bits/stdc++.h> // H?u t?
using namespace std;
using ll = long long;
int visited[1005];
vector<int> ke[1005];
int n, m, s;
void DFS(int u) {
	visited[u] = 1;
	for (auto it : ke[u]) {
		if (!visited[it]) {
			DFS(it);
		}
	}
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(ke, 0, sizeof(ke));
		memset(visited, 0, sizeof(visited));
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			ke[x].push_back(y);
			ke[y].push_back(x);
		}
		int check = 0;
		int chan = 0;
		int le = 0;
		for (int i = 1; i <= n; i++) {
			if (ke[i].size() && ke[i].size() % 2 == 0) {
				chan++;
			} else if (ke[i].size() && ke[i].size() % 2 == 1) {
				le++;
			}
		}
		if(chan == n) {
			cout << 2 << endl;
		} else if ( le == 0 || le == 2) {
			cout << 1 << endl;
		} else {
			cout << 0 << endl;
		}
	}
}
