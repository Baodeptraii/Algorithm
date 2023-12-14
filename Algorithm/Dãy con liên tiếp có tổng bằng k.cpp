#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n>>k;
	int a[n];
	for(long int i = 0; i < n; i++) {
		cin >> a[i];
	}

	map <long long , long long> mp;
	int MAX = 0;
	int begin = 0;
	long long sum = 0;

	for(long int i = 0; i < n; i++) {
		sum += a[i];
		if(sum == k) {
			begin = 0;
			MAX = i + 1;
		}
    // đi tìm vị trí của dãy con thỏa mãn
		if(mp.find(sum) != mp.end()) {
			if(MAX < i - mp[sum]) {
				MAX = i - mp[sum];
				begin = mp[sum] + 1;
			}
		} else {
			mp[sum] = i;
		}
	}
  
	if(MAX == 0) {
		cout << "NOT FOUND";
	} else {
		for(long int i = begin; i < begin + MAX; i++) {
			cout << a[i] << " ";
		}
	}
}
