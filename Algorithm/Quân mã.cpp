#include <bits/stdc++.h> // Quân mã
using namespace std;
using ll = long long;

int dx[8] = { -2, -2 , -1, -1, +1, +1, +2, +2};
int dy[8] = { -1, +1, -2, +2, -2, +2, -1, +1};
int visited[100][100];
int d[100][100];
int bfs(int s, int t, int u, int v){
    queue<pair<int,int>> q;
    q.push({s,t});
    visited[s][t] = 1;
    d[s][t] = 0;
    while(!q.empty()){
        pair<int,int> it = q.front(); q.pop();
        if(it.first == u && it.second == v){
            return d[u][v];
        }
        for(int k=0; k<8;k++){
            int x = it.first + dx[k];
            int y = it.second + dy[k];
            if( x >= 1 && x <= 8 && y >= 1 && y <= 8 && !visited[x][y]){
                q.push({x,y});
                visited[x][y] = 1;
                d[x][y] = d[it.first][it.second] + 1;
            }
        }
    }
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x, y;
        cin >> x >> y;
        // Bàn cờ đang là cột-hàng (chữ-số) -> hàng-cột(số-số)
        int t = x[0] - 'a' + 1;
        int s = 8 - (x[1] - '0') + 1;
        int v = y[0] - 'a' + 1;
        int u = 8 - (y[1] - '0') + 1;
        memset(visited, 0, sizeof(visited));
        memset(d, 0, sizeof(d));
        cout << bfs(s, t, u, v) << endl;
    }
}