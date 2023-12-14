// Trong test này là 28, đếm phần dư của a[i]%28, có các cặp số .

#include <bits/stdc++.h>
using namespace std;
int a[1000005];
int dem[100];
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		dem[a[i] % 28]++;
	}
	long long res = 0;
	res = 1ll * dem[0] * (dem[0]-1)/2 + 1ll *dem[14]*(dem[14]-1)/2;
	for(int i=1;i<=13;i++){
		res+= 1ll *dem[i]*dem[28-i];
	}
	cout<<res;

}
