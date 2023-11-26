#include <bits/stdc++.h>
using namespace std;

int n,a[100],xopt[100];
long c[100][100], fopt=10000001;

long Check(int a[] , int n) {
	long s=0;
	int i;
	for( i=1; i<n; i++) {
		s = s + c[a[i]][a[i+1]];
	}
	s = s + c[a[n]][a[i]];
	return s;
}

void HvKe(int a[], int n) {
	int i;
	for(i=1; i<=n; i++) a[i]=i;
	while(1) {
		long t = Check(a,n);
		if(fopt > t) {
			fopt = t;
			for(i = 1; i<=n; i++) xopt[i] = a[i];
		}
		i = n-1;
		while(i>1 && a[i] > a[i+1]) {
			i--;
			if(i==1) {
				cout<<fopt<<endl;
				for(i = 1; i<=n; i++) {
					cout<<xopt[i]<<" ";
				}
				return ;
			}
		}

		int k =n;
		while(a[k] < a[i]) k--;
		int tmp = a[i];
		a[i] = a[k];
		a[k] = tmp;
		int l=i+1;
		int r =n;
		while(l<r) {
			tmp = a[l];
			a[l] = a[r] ;
			a[r] = tmp;
			l++;
			r--;
		}
	}
}



int main() {
	cout<<"Nhap n = ";
	cin>>n;
	for(int i=1; i<=n; i++) {
		for(int j=1; j<=n; j++) {
			//cout<<"Nhap chi phi tu " <<i<<" den "<<j<<" ";
			cin>>c[i][j];
		}
	}
	HvKe(a,n);
}


