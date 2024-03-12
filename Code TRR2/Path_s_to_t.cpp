#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int n;
int visited[100];
int kq = 0;

void dequy_dfs(int u, vector<int> path, int end) {
	if (kq == 1) {
		return;
	}
	path.push_back(u);
	visited[u] = 1;
	if (u == end) {
		reverse(path.begin(), path.end());
		cout << "DFS path: ";
		for (int i = 0; i < path.size(); i++) {
			cout << path[i] << " ";
		}
		kq = 1;
		cout << endl;
	}
	for (int v = 1; v <= n; v++) {
		if (a[u][v] == 1 && visited[v] == 0) {
			dequy_dfs(v, path, end);
		}
	}
	path.pop_back();
	visited[u] = 0;
}
int main() {
	cin >> n;
	int start, end;
	cin >> start >> end;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	vector<int> path;
	dequy_dfs(start, path, end);
	if (kq == 0) {
		cout << "no path" << endl;
		return 0;
	}
}
/*
Nhập vào ma trận kề và 2 đỉnh cần tìm đường đi
*/