#include <bits/stdc++.h>
using namespace std;

int kq = 0;
int a[1005][1005];
int check[1005];
int n;
vector<int> path;

void quaylui(int id, int cur) {
    for (int i = 1; i <= n; i++) {
        if (a[cur][i] == 1 && cur != i) {
            if (id == n  && i == path[0]) {
                for (int j = 0; j < path.size(); j++) {
                    cout << path[j] << " ";
                }
                cout << 1 << " ";
                cout << "\n";
            } else if (check[i] == 0) {
                check[i] = 1;
                path.push_back(i);
                quaylui(id + 1, i);
                check[i] = 0;
                path.pop_back();
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;
    int start;
    cin >> start;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    //hamilton
    path.push_back(start);
    check[start] = 1;
    quaylui(1, start);

}
/*
Nhập vào ma trận kề và điểm xuất phát
*/