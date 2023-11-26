#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define N 100
#define M 100

int n, m;
int c_min = INT_MAX;
int dk = 0, gk = 0;
int F_opt = INT_MAX, X_opt[N];
int X[N];
int c[N][M];
bool is_visited[N] = { false };

/*
6
0 31 15 23 10 17
16 0 24 07 12 12
34 03 0 25 54 25
15 20 33 0 50 40
16 10 32 03 0 23
18 20 13 28 21 0
*/

void Branch_And_Bound_Min(int i) {
    for (int j = 2; j <= n; j++)
		if (!is_visited[j]) {
			is_visited[j] = true;
			X[i] = j;
			dk = dk + c[X[i - 1]][X[i]];
			gk = dk + (n - i + 1) * c_min;

			if (i == n && dk + c[X[i]][1] < F_opt) {
				F_opt = dk + c[X[i]][1];
				copy(X, X + n + 1, X_opt);
			}
			else if (gk < F_opt) Branch_And_Bound_Min(i + 1);

			dk = dk - c[X[i - 1]][X[i]];
			is_visited[j] = false;
		}
}


int main() {
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> c[i][j];
			c_min = min(c_min, c[i][j]);
		}
	}

	X[1] = 1;
	Branch_And_Bound_Min(2);

	cout << F_opt << endl;
	for (int i = 1; i <= n; i++) cout << X_opt[i] << " ";
	cout << 1 << endl;

	return 0;
}
