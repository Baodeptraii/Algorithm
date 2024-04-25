#include <bits/stdc++.h>
#define endl "\n"
using namespace std;
string s;

int solve(string s, int n) {
	int cnt[n + 1];
	cnt[0] = 1;
	cnt[1] = 1;
	if(s[0] == '0') {
		return 0;
	}
	for(int i=2; i<=n; i++) {
		cnt[i] = 0;
		if(s[i-1] > '0') {
			cnt[i] += cnt[i-1];
		}
		if(s[i-2] == '1' || s[i-2] == '2' && s[i-1] < '7') {
			cnt[i] += cnt[i-2];
		}
	}
	return cnt[n];
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		cin >> s;
		cout << solve(s, s.length()) << endl;
	}
	return 0;
}

// 90 99
