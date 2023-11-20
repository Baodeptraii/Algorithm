#include <bits/stdc++.h>
using namespace std;

void solve(string s, int n) {
	if (s.length() == n) {
		cout << s << " ";
		return;
	}
	solve(s + '0', n);
	solve(s + '1', n);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		solve("", n);
		cout << endl;
	}
	return 0;
}

