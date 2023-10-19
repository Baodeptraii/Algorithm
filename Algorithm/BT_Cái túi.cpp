#include <bits/stdc++.h>
using namespace std;

int n,b,a[100],c[100],x[100];
int fopt = -1, xopt[100];

long Check(int x[], int n) {
	long s = 0, tmp =0;
	int i;
	for( i = 1; i<=n; i++) {
		s = s + x[i]*a[i];
	}
	if(s<=b) {
		for(i=1; i<=n; i++) {
			tmp = tmp + x[i]*c[i];
		}
	} else {
		tmp = -1;
	}
	return tmp;
}

void XnpKt(int x[], int n) {
	int i;
	for(i = 1; i<=n; i++) {
		x[i]=0;
	}
	while(1) {
		long tmp = Check(x,n);
		if(fopt < tmp) {
			fopt = tmp;
			for(i=1; i<=n; i++) xopt[i]=x[i];
		}
		i = n;
		while(i>0 && x[i]==1 ) {
			x[i] = 0;
			i--;
		}
		if(i==0) {
			cout<<fopt<<endl;
			for(i = 1; i<=n; i++) {
				cout<<xopt[i]<<" ";
			}
			return ;
		} else x[i] = 1;
	}

}
int main() {
	cout<<"Nhap n = ";
	cin>>n;
	cout<<"Nhap b = ";
	cin>>b;
	for(int i=1; i<=n; i++) {
		cout<<"Nhap khoi luong do vat "<<i<<": ";
		cin>>a[i];
		cout<<"Nhap gia tri do vat "<<i<<": ";
		cin>>c[i];
	}
	XnpKt(x,n);
}


