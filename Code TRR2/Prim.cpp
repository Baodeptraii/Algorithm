#include <bits/stdc++.h>
using namespace std;

int kq = 0;
int a[1005][1005];
int check[1005];
int n;
struct canh {
	int u, v, w;
	bool operator < (const canh &a) const {
		if (w == a.w) {
			if (u == a.u) {
				return v < a.v;
			}
			return u < a.u;
		}
		return w < a.w;
	}
};

struct cmp {
	bool operator () (const canh &a, const canh &b) {
		if (a.w == b.w) {
			if (a.u == b.u) {
				return a.v > b.v;
			}
			return a.u > b.u;
		}
		return a.w > b.w;
	}
};

vector<canh> edges;

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
			if (a[i][j] > 0 && i < j) {
				edges.push_back({i, j, a[i][j]});
			}
		}
	}

	priority_queue<canh, vector<canh>, cmp> pq;
	check[start] = 1;
	for (int i = 1; i <= n; i++) {
		if (a[start][i] > 0) {
			pq.push({start, i, a[start][i]});
		}
	}
	vector<canh> ans;
	while (!pq.empty()) {
		canh top = pq.top();
		while (!pq.empty() && check[top.v] == 1) {
			pq.pop();
			top = pq.top();
		}
		if (pq.empty()) {
			break;
		}
		pq.pop();
		kq += top.w;
		ans.push_back(top);

		check[top.v] = 1;
		for (int i = 1; i <= n; i++) {
			if (a[top.v][i] > 0 && check[i] == 0) {
				pq.push({top.v, i, a[top.v][i]});
			}
		}
	}
	cout << "dH = " << kq << endl;
	for (auto i : ans) {
		cout << min(i.u,i.v) << " " << max(i.u,i.v) << endl;
	}

}

/*
Nhập vào ma trận kề và điểm xuất phát
*/