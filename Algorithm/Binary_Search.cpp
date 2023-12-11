#include <bits/stdc++.h>
using namespace std;

//Linear Search O(n)

bool ls(int a[], int n, int x) {
	for(int i=0;i<n;i++) {
		if(a[i]==x) {
			return true;
		}
	}
	return false;
}

//Binary Search O(logn)
//Cac phan tu phai sap xep tang/giam dan
bool bs(int a[], int n, int x) {
	int l=0, r=n-1;
	while(l<=r) {
		int m=(l+r) / 2;
		if(a[m]==x) {
			return true;
		}else if (a[m]<x) {
			l=m+1;
		} else {
			r=m-1;
		}
	}
	return false;
}

bool bs2(int a[], int l, int r, int x) {
	if(l>r) {
		return false;
	}
	int m = (l+r)/2;
	if(a[m]==x) 
		return true;
	else if(a[m] < x) {
		return bs2(a,m+1,r,x);
	} else {
		return bs2(a,l,m-1,x);
	}
}
int main() {
	int n,x;cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	cin>>x;
//	if(bs2(a,0,n-1,x)) {
//		cout<<"FOUND\n";
//	} else {
//		cout<<"NOT FOUND";
//	}

	//Ham nay co san
	if(binary_search(a,a+n,x)) {
		cout<<"Y";
	} else {
		cout<<"N";
	}
}


