#include <bits/stdc++.h>
using namespace std;
int kq = 0;
int a[1005][1005];
int check[1005];
int n;

void dfs(int u) {
    check[u] = 1;
    for (int i = 1; i <= n; i++) {
        if (a[u][i] == 1 && check[i] == 0) {
            cout << min(u, i) << " " << max(u, i) << endl;
            dfs(i);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int start;
    cin >> start;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "DFS tree\n";
    dfs(start);
}
/*
Nhập vào ma trận kề và điểm xuất phát
*/

