#include <bits/stdc++.h>
using namespace std;
#define ll long long

//Bai toan, so nho nhat thoa man 1 dieu kien nao do
//Chia het cho 1 ( 2 , 3 ... ) so nao do

ll gcd(ll a, ll b) {
	if(b==0) return a;
	return gcd(b, a%b);
}

ll lcm (ll a, ll b) {
	return (a*b)/gcd(a,b);
}

//VD: >123123, chia het cho 9 va 11

int main() {
	//tim BCNN cua 9 va 11
	int n = lcm(9,11);
	//Ap dung cong thuc
	int res  = (123123 + n - 1) / n * n;
	cout<<res;
}


