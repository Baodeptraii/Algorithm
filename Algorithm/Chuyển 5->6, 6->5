#include<bits/stdc++.h>
using namespace std;
void be(string &a) {
	for(int i=0; i<a.length(); i++) {
		if(a[i]=='6') a[i]='5';
	}
}
void lon(string &b) {
	for(int i=0; i<b.length(); i++) {
		if(b[i]=='5') b[i]='6';
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		string n,m;
		cin>>n>>m;
		be(n);
		be(m);
		long long x=stoll(n);
		long long y=stoll(m);
		cout<<(unsigned long long)x+y<<" ";
		lon(n);
		lon(m);
		x=stoll(n);
		y=stoll(m);
		cout<<(unsigned long long)x+y<<endl;
	}
}
