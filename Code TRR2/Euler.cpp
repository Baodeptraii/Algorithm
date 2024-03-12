#include <bits/stdc++.h>
using namespace std;

int kq = 0;
int a[1005][1005];
int check[1005];
int n;

int main() {
    int n;
    cin >> n;
    int start;
    cin >> start;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    stack<int> st;
    vector<int> res;
    st.push(start);
    while (!st.empty()) {
        int u = st.top();
        for (int i = 1; i <= n; i++) {
            if (a[u][i] == 1) {
                a[u][i] = 0;
                a[i][u] = 0;
                st.push(i);
                break;
            }
        }
        if (u == st.top()) {
            res.push_back(u);
            st.pop();
        }
    }
    for (int i = res.size() - 1; i >= 0; i--) {
        cout << res[i] << " ";
    }

}

/*
Nhập vào ma trận kề và điểm xuất phát
*/