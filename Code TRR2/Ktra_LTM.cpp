#include <bits/stdc++.h>
using namespace std;

int check[1005];
int kq = 0;
int a[1005][1005];
int n;
int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    queue<int> q;
    q.push(1);
    check[1] = 1;
    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int i = n; i >= 1; i--) {
            if (a[u][i] == 1 && check[i] == 0) {
                check[i] = 1;
                q.push(i);
                break;

            }
        }
    }
    for (int i = 1; i <= n; i++) {
        if (check[i] == 0) {
            cout << "Khong lien thong manh";
            return 0;
        }
    }
    cout << "Lien thong manh";

}

/*
Nhập vào ma trận kề 
*/