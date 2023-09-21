#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	float a[n];
	set<float>se;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		se.insert(a[i]);
	}
	float res=0;
	float b[n-2];
	int i=0;
	for(auto x:se) {
		b[i]=x;
		i++;
	}
	for(int i=1;i<n-2;i++) {
		res+=b[i];
	}
	res/=(se.size()-2);
	cout<<setprecision(2)<<fixed<<res;
}
