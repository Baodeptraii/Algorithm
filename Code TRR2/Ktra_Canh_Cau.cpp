#include <bits/stdc++.h>
using namespace std;

int check[1005];
int kq = 0;
int a[1005][1005];
int b[1005][1005];
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    int dem = 0;
    for (int i = 1; i <= n; i++) {
        if (!check[i]) {
            dem++;
            queue<int> q;
            q.push(i);
            check[i] = 1;
            while (!q.empty()) {
                int u = q.front();
                q.pop();
                for (int j = 1; j <= n; j++) {
                    if (a[u][j] && !check[j]) {
                        check[j] = 1;
                        q.push(j);
                    }
                }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 1) {
                a[i][j] = 0;
                memset(check, 0, sizeof(check));
                int dem1 = 0;
                for (int i = 1; i <= n; i++) {
                    if (!check[i]) {
                        dem1++;
                        queue<int> q;
                        q.push(i);
                        check[i] = 1;
                        while (!q.empty()) {
                            int u = q.front();
                            q.pop();
                            for (int j = 1; j <= n; j++) {
                                if (a[u][j] && !check[j]) {
                                    check[j] = 1;
                                    q.push(j);
                                }
                            }
                        }
                    }
                }
                if (dem1 > dem) {
                    cout << i << " " << j << endl;
                }
                a[i][j] = 1;
            }
        }
    }
}


/*
Nhập vào ma trận kề 
*/