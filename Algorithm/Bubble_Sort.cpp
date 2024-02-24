#include <bits/stdc++.h>
using namespace std;
int n;
int a[10000001];
void print() {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int cnt = 1;
	for (int i = 0; i < n-1; i++) {
		bool k = false;
		for(int j=0; j < n-1-i; j++) {
			if(a[j] > a[j+1]) {
				swap(a[j], a[j+1]);
				k = true;

			}
		}
		if(k == false) {
			break;
		}
		cout<<"Buoc "<<cnt<<": ";
		print();
		cnt++;
	}
}
