#include <bits/stdc++.h>
using namespace std;

int a[1005][1005];
int n;

void bfs(int start) {
    vector<int> visited(n + 1, 0);
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = 1; i <= n; i++) {
            if (a[u][i] == 1 && visited[i] == 0) {
                cout << min(u, i) << " " << max(u, i) << endl;
                q.push(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int start;
    cin >> n >> start;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    cout << "BFS tree\n";
    bfs(start);

    return 0;
}
/*
Nhập vào ma trận kề và điểm xuất phát
*/
