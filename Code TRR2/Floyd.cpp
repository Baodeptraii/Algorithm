#include <bits/stdc++.h>
using namespace std;
const int oo = 99999;
int a[1812][1812];
int n, m;
int next1[100][100];
int graph[100][100];

int main() {
	cin >> n;
//    for (int i = 1; i <= m; i++) { // Nhap theo danh sach canh
//        int p, q, w;
//        cin >> p >> q >> w;
//        a[p][q] = a[q][p] = w;
//    }
	memset(next1, INT_MAX, sizeof next1);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			cin >> a[i][j];
			if(a[i][j] != oo && a[i][j] != 0) {
				next1[i][j] = j;
			}
		}
	}

	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++) {
				if((a[i][j] >  a[i][k] + a[k][j]) && (a[i][k] != oo) && (a[k][j] != oo)) {
					a[i][j] = a[i][k] + a[k][j];
					next1[i][j] = next1[i][k];
				}
			}
	cout << "Ma tran khoang cach: \n";
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(a[i][j] == oo) {
				cout << "Khong co duong di tu " << i << " toi " << j << endl;
				continue;
			}
			if (i != j) {
				cout << "Duong " << i << " toi " << j <<": ";
				for(int tmp = i; tmp != j; tmp = next1[tmp][j]) {
					cout << tmp << " ";
				}
				cout << j << endl;
			}
		}
	}
}

