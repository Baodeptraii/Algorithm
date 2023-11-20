#include <bits/stdc++.h>
using namespace std;
int snt(int a) {
	if(a<2) {
		return 0;
	}
	for(int i=2; i<=sqrt(a); i++) {
		if(a%i==0) {
			return 0;
		}
	}
	return 1;
}
int main() {
	int t;
	cin>>t;
	for(int q=1; q<=t; q++) {
		int n;
		cin>>n;
		int dem=0;
		int a[1000];
		int l=0;
		int k=2;
		int s=0;
		while(dem<n*n) {
			if(snt(k)==1) {
				dem++;
				a[l]=k;
				l++;
				k++;
			} else {
				k++;
			}
		}
		int b[100][100];
		for(int i=0; i<n; i++) {
			for(int j=i; j<n-i; j++) {
				b[i][j]=a[s];
				s++;
			}
			for(int j=i+1; j<n-i; j++) {
				b[j][n-i-1]=a[s];
				s++;
			}
			for(int j=n-i-2; j>=i; j--) {
				b[n-i-1][j]=a[s];
				s++;
			}
			for(int j=n-i-2; j>=i+1; j--) {
				b[j][i]=a[s];
				s++;
			}
		}
		cout<<"Test "<<q<<":"<<endl;
		for(int i=0; i<n; i++) {
			for(int j=0; j<n; j++) {
				cout<<b[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}
