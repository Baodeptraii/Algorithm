#include <bits/stdc++.h>
using namespace std;
int check[1005];
int kq = 0;
int a[1005][1005];
int b[1005][1005];
int n;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			dem++;
			queue<int> q;
			q.push(i);
			check[i] = 1;
			while (!q.empty()) {
				int u = q.front();
				q.pop();
				for (int j = 1; j <= n; j++) {
					if (a[u][j] && !check[j]) {
						check[j] = 1;
						q.push(j);
					}
				}
			}
		}
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j <= n; j++) a[i][j] = 0;
		//check
		memset(check, 0, sizeof(check));
		int dema = 0;
		for (int j = 1; j <= n; j++) {
			if (!check[j]) {
				dema++;
				queue<int> q;
				q.push(j);
				check[j] = 1;
				while (!q.empty()) {
					int u = q.front();
					q.pop();
					for (int k = 1; k <= n; k++) {
						if (a[u][k] && !check[k]) {
							check[k] = 1;
							q.push(k);
						}
					}
				}
			}
		}
		if (dema > dem) {
			cout << i << " ";
		}
		for (int j = 1; j <= n; j++) a[i][j] = b[i][j];
	}
}

/*
Nhập vào ma trận kề 
*/