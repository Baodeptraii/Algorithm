// Đường đi dài nhất trong ma trận ( có thể đi sang phải, dưới, chéo phải )
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	cin>>n>>m;
	vector<vector<int>> a(n+1, vector<int>(m+1));

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			cin>>a[i][j];
		}
	}

	for(int i=1; i<=n; i++) {
		for(int j=1; j<=m; j++) {
			a[i][j]+=max({a[i-1][j], a[i-1][j-1], a[i][j-1]});		
		}
	}
	cout<<a[n][m];
	
}
