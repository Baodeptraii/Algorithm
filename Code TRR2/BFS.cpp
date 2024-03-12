#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
bool visited [1001];

void input() {
	cin >> n >>m;
	for(int i=0; i<m; i++) {
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		adj[x].push_back(y); // Vo huong
	}
	memset(visited, false,  sizeof(visited));
}

void bfs(int u){
	// Khoi tao
	queue<int> q;
	q.push(u);
	visited[u] = true;
	// Thuc hien thuat toan
	while(!q.empty()){
		int v = q.front(); // Dinh o dau hang doi
		q.pop();
		cout<<v<<" ";
		for(int x: adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main() {
	input();
	bfs(1);	

}

/*
Nhập vào danh sách cạnh
*/