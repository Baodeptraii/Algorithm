#include <bits/stdc++.h> // 13 - So sanh chieu cao - 63/75 
using namespace std;
using ll = long long;

int n, len;
unordered_map<string, unordered_set<string>> mp;
unordered_map<string, int> degree;
bool check = true;
bool kahn() {
	int cnt = 0;
	queue<string> q;
	for(auto x : mp) {
		if(!degree[x.first]) {
			q.push(x.first);
		}
	}
	while(!q.empty()) {
		auto s = q.front();
		q.pop();
		cnt++;
		for(auto x : mp[s]) {
			degree[x]--;
			if(!degree[x] ) {
				q.push(x);
			}
		}
	}
	return cnt == len;

}
int main() {
	cin >> n;
	unordered_map<string, int> dem;
	for(int i = 0; i < n; i++) {
		string a, b;
		char c;
		cin >> a >> c >> b;
		if(c == '>') {
			mp[a].insert(b);
			degree[b]++;
		} else {
			mp[b].insert(a);
			degree[a]++;
		}
		dem[a]++;
		dem[b]++;
		if(dem[a] == 1) len++;
		if(dem[b] == 1) len++;
	}
	check = kahn();
	if(check) {
		cout << "possible\n";

	} else {
		cout << "impossible\n";
	}
}
