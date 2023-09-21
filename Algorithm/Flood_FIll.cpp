#include <bits/stdc++.h>
using namespace std;

int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};

void solve(char a[][100], int i, int j, int n, int m) {
    a[i][j] = '*';
    for (int k = 0; k < 4; k++) {
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1] == 'O') {
            solve(a, i1, j1, n, m);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        char a[n][100];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> a[i][j];
            }
        }
        for(int i=0;i<n;i++) {
        	if(a[i][0]=='O') solve(a,i,0,n,m);
        	if(a[i][m-1]=='O') solve(a,i,m-1,n,m);
		}
		for(int i=0;i<m;i++) {
        	if(a[0][i]=='O') solve(a,0,i,n,m);
        	if(a[n-1][i]=='O') solve(a,n-1,i,n,m);
		}
		for(int i=0;i<n;i++) {
        	for(int j=0;j<m;j++) {
        		if(a[i][j]!='*') {
        			cout<<"X ";
				} else {
					cout<<"O ";
				}
			}
			cout<<endl;
		}
    }
}

