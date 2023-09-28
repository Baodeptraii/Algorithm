#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	double sqr = sqrt(n);
	int sum=0;
	for(int i=1;i<=sqr;i++) {
		if(n%i==0) {
			if(i==sqr) {
				sum+=i;
			} else {
				sum+=i+n/i;
			}
		}
	}
	
	// neu n chia het cho i thi n cung chia het cho n/i
	// neu n/i != i ( k phai la can cua n )
	// ktra n co phai so chinh phuong hay khong

	cout<<sum;
}


