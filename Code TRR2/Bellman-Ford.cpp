#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> ii;
vector<ii> a[181220];
int n, m;

int d[181220];
bool inqueue[181220];
int pre[181220];
vector<int>path;

void bellman(int u) {
    //Buoc 1: Khoi tao
    queue<int> qu;
    for (int i = 1; i <= n; i++) d[i] = 99999999;
    d[u] = 0;
    qu.push(u); 
    inqueue[u] = true; 
    // Buoc 2: Lap
    while (qu.size()) {
        u = qu.front(); 
        inqueue[u] = false; 
        qu.pop(); 
        for (int i = 0; i < a[u].size(); i++) { 
            int v = a[u][i].second;
            int uv = a[u][i].first;
            if (d[v] > d[u] + uv) {
                d[v] = d[u] + uv;
                pre[v] = u;
                if (!inqueue[v]) { 
                    qu.push(v); 
                    inqueue[v] = true; 
                }
            }
        }
    }
}

int main() {
    int u, v; // dinh nguon va dinh dich
    scanf("%d%d%d%d", &n, &m, &u, &v);
    while (m--) {
        int p, q, w;
        scanf("%d%d%d", &p, &q, &w);
        // Do thi vo huong
        a[p].push_back(ii(w, q));
        a[q].push_back(ii(w, p));
    }
    bellman(u);
    printf("%d\n", d[v]);
    for(int i = v; i != u;  i = pre[i]) path.push_back(i); 
    path.push_back(u);
    reverse(path.begin(), path.end());
    printf("Duong di: ");
    for(int i = 0; i < path.size(); i++){
    	if(i == path.size() - 1){
    		printf("%d", v);
    		break;
	}
   	printf("%d -> ",path[i]);
    }
}


/*
Dòng đầu tiên chứa 4 số nguyên cách nhau bởi khoảng trắng: 
n là số lượng đỉnh trong đồ thị.
m là số lượng cạnh trong đồ thị.
u là đỉnh nguồn.
v là đỉnh đích.
Mỗi dòng tiếp theo chứa 3 số nguyên cách nhau bởi khoảng trắng: 
p,q,w.
p và q là các đỉnh của một cạnh trong đồ thị.
w là trọng số của cạnh đó.
Ví dụ input có thể là:
5 7 1 5
1 2 2
1 3 6
2 3 3
2 4 4
2 5 7
3 5 1
4 5 5
*/