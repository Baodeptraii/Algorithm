#include <bits/stdc++.h> // 7 - So buoc di chuyen it nhat AC
using namespace std;
const int N = 1001;
int n, m;
int dx[] = {1, 1, 0};
int dy[] = {0, 1, 1};
bool isSafe(int nx, int ny) {
	if (nx >= 1 && nx <= n && ny >= 1 && ny <= m)
		return true;
	return false;
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		int arr[N][N];
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= m; j++) {
				cin >> arr[i][j];
			}
		}
		int f[N][N];
		memset(f, 0, sizeof(f));
		queue<pair<int, int>> q;
		q.push({1, 1});
		int ans = -1;
		while (!q.empty()) {
			auto cur = q.front();
			q.pop();
			if (cur.first == n && cur.second == m) {
				ans = f[cur.first][cur.second];
				break;
			}
			for (int i = 0; i < 3; i++) {
				int x = cur.first + dx[i];
				int y = cur.second + dy[i];
				int len =0;
				if (isSafe(x, y)) {
					len = abs(arr[x][y] - arr[cur.first][cur.second]);
				}
				if(len > 0) {
					int nx = cur.first + dx[i]*len;
					int ny = cur.second + dy[i]*len;
					if(isSafe(nx, ny) && !f[nx][ny]) {
						f[nx][ny] = f[cur.first][cur.second] + 1;
						q.push({nx, ny});
					}
				}
			}
		}
		cout << ans << "\n";
	}
}
