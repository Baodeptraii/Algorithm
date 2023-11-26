
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
#define N 100000
int n;
double b;
vector<pair<int, int>> danh_sach;
int dk = 0, bk;
double gk = 0, F_opt = 0;
int X_opt[N], X[N];

void Branch_And_Bound_Max(int i) {
	for (int j = 1; j >= 0; j--)
		if (bk - j * danh_sach[i].first >= 0) {
			X[i] = j;
			dk = dk + j * danh_sach[i].second;
			bk = bk - j * danh_sach[i].first;
			if (i != n - 1)
				gk = dk + bk * (danh_sach[i + 1].second * 1.0 / danh_sach[i + 1].first);

			if (i == n - 1 && dk > F_opt) {
				F_opt = dk;
				copy(X, X + n, X_opt);
			}
			else if (gk > F_opt) Branch_And_Bound_Max(i + 1);

			dk = dk - j * danh_sach[i].second;
			bk = bk + j * danh_sach[i].first;
		}
}

bool compare(pair<int, int> a, pair<int, int> b) {
	return (a.second * 1.0 / a.first) > (b.second * 1.0 / b.first);
}

int main() {
	cin >> n >> b;
	bk = b;

	int trong_luong;
	int gia_tri;

	for (int i = 0; i < n; i++) {
		cin >> trong_luong >> gia_tri;
		danh_sach.push_back({ trong_luong, gia_tri });
	}

	sort(danh_sach.begin(), danh_sach.end(), compare);
	Branch_And_Bound_Max(0);

	cout << F_opt << endl;
	for (int i = 0; i < n; i++) cout << X_opt[i] << " ";

	return 0;
}
