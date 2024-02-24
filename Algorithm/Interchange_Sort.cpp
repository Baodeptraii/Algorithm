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
		for(int j=i; j <n; j++) {
			if(a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
		cout<<"Buoc "<<cnt<<": ";
		print();
		cnt++;
	}
}
