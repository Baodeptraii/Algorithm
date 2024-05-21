#include <bits/stdc++.h> // H?u t?
using namespace std;
using ll = long long;
int visited[1005];
vector<int> degra[1005];
vector<int> degvao[1005];
int n, m, s;

int main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> m;
		memset(degra, 0, sizeof(degra));
		memset(degvao, 0, sizeof(degvao));
		memset(visited, 0, sizeof(visited));
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			degra[x].push_back(y);
			degvao[y].push_back(x);
		}
		int check = 0;
		int chan = 0;
		int le = 0;
		for (int i = 1; i <= n; i++) {
			if(degra[i].size() != degvao[i].size()) {
				check = 1;
				break;
			}
		}
		if(check) {
			cout << 0 <<endl;
		} else {
			cout << 1<<endl;
		}
	}
}
