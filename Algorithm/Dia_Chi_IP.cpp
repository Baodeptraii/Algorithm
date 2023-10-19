#include <bits/stdc++.h>
using namespace std;

void solve() {
	string s;
	cin >> s;
	int cnt = 0;
	string tmp;
	s += ".";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] >= '0' && s[i] <= '9') {
			tmp.push_back(s[i]);
		} else if (s[i] == '.') {
			cnt++;
			if (tmp.size() > 3 || cnt > 4) {
				cout << "NO" << endl;
				return ;
			} else {
				int tmp2 = stoi(tmp);
				if (tmp2 > 255) {
					cout << "NO" << endl;
					return ;
				}
			}
			tmp = "";
		} else {
			cout << "NO" << endl;
			return ;
		}
	}
	if (cnt == 4)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
}
// >1 <4, >=4 <


int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
