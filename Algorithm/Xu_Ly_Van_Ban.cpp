#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	vector<string> v;
	int n = 1;
	while (cin >> s) {
		for (int i = 0; i < s.length(); i++) {
			s[i] = tolower(s[i]);
		}
		v.push_back(s);
	}
	for (auto x : v) {
		if (n == 1) {
			x[0] = toupper(x[0]);
			n = 0;
		}
		char c = x[x.length() - 1];
		if (c == '.' || c == '?' || c == '!') {
			x.pop_back();
			cout << x << endl;
			n = 1;
		} else {
			cout << x << " ";
		}
	}
}

