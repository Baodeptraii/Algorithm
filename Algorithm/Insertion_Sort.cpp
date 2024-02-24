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
	for (int i = 0; i < n; i++) {
		int k = a[i];
		int j = i-1;
		while(j>=0 && a[j] > k) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
		cout<<"Buoc "<<i<<": ";
		for (j = 0; j <= i; j++)
			cout << a[j] << " ";
		cout << endl;
		cnt++;
	}
}
