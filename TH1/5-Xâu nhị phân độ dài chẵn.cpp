#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n, a[1000000], ok;
void ktao() {
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
}
void sinh() {
	int i = n;
	while (i > 0 && a[i] != 0) {
		a[i] = 0;
		i--;
	}
	if (i == 0) {
		ok = 0;
	} else {
		a[i] = 1;
	}
}
bool check() {
	int l = 1, r = n;
    while (l <= r) {
        if(a[l] != a[r]){
            return false;
        }
        r--;
        l++;
    }
    return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int m;
        cin>>m;
        int max_n = m/2;
        for(n=1;n<=max_n;n++){
            ktao();
            ok = 1;
            while(ok){
                for(int i=1;i<=n;i++) cout<<a[i];
                for(int i=n;i>=1;i--) cout<<a[i];
                cout<<" "; 
                sinh();
            }
        }
        cout<<endl;
	}
}
/*

Input

2

2

4
Output


00 11

00 11 0000 0110 1001 1111
*/