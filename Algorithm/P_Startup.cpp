#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct ptit{
	ll a,b,c;
	ll res;
};

bool cmp(ptit x, ptit y) {
	if(x.res == y.res) return x.a < y.b;
	return x.res > y.res;
}

int main()
{
	int t;
	cin >>t;
	ptit x[t];
	for(int i=0;i<t;i++) {
		cin>>x[i].a>>x[i].b>>x[i].c;
		x[i].res = x[i].b * 7 + x[i].c * 3;
	}
	sort(x,x+t,cmp);
	for(int i=0;i<7;i++) {
		cout<<x[i].a<<" ";
	}
}



