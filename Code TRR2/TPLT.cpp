#include <bits/stdc++.h>
using namespace std;

int a[100][100];
int n;
int visited[100];

void dequy_dfs(int u) {
    visited[u] = 1;
    for (int v = 1; v <= n; v++) {
        if (a[u][v] == 1 && visited[v] == 0) {
            dequy_dfs(v);
        }
    }
}
	
int main() {
    cin >> n;
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        if (visited[i] == 0) {
            dequy_dfs(i);
            dem++;
        }
    }
    cout << dem;
}
/*
Nhập vào ma trận kề
*/