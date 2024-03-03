#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[10000], ok = 1;
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}

void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 1) {
		a[i] = 0;
		i--;
	}
	if (i == 0) {
		ok = 0;
	} else {
		a[i] = 1;
	}
}
int main() {
	cin >> n;
	ktao();
	while (ok) {
		int cnt = 0;
		for (int i = 1; i <= n; i++) {
			if (a[i] == 1) {
				cnt++;
			}
		}
		if (cnt % 2 == 0) {
			for (int i = 1; i <= n; i++) {
				cout << a[i] << " ";
			}
			cout << endl;
		}

		sinh();
	}
}

/*
Input
4
Output
0 0 0 0

0 0 1 1

0 1 0 1

0 1 1 0

1 0 0 1

1 0 1 0

1 1 0 0

1 1 1 1
*/