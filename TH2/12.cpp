#include <bits/stdc++.h> // 12 - Binh thong nhau AC
using namespace std;
using ll = long long;

const int N = 100000;
int roooot[N];

int findroooot(int n) {
	if(roooot[n] == n) {
		return n;
	}
	return roooot[n] = findroooot(roooot[n]);
}

int main() {
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		roooot[i] = i;
	}
	for(int i = 1; i <= n; i++) {
		int a, b, t;
		cin >> a >> b >> t;
		int ra = findroooot(a);
		int rb = findroooot(b);
		if(t == 1) {
			if(ra!= rb) {
				roooot[ra] = rb;
			}
		} else {
			if(ra == rb) {
				cout << "1" << endl;

			} else {
				cout << "0" << endl;
			}
		}
	}


}
