#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[1001];
bool visited[1001];

void input() {
	cin>>n>>m;
	for(int i=0; i<m; i++) {
		int x,y; cin >> x>>y;
		adj[x].push_back(y);
	//	adj[x].push_back(y); // Vo huong
	}
	memset(visited, false, sizeof(visited));
}

void dfs(int u){
	cout<<u<<" ";
	// Tham dinh u
	visited[u] = true;
	for(int v: adj[u]){
		// Xet dinh v
		if(!visited[v]){
			dfs(v);
		}
	}
}

int main() {
	input();
	dfs(1);
}

/*
	Input: Vo huong						
	9 9
	1 2 
	1 3
	1 5
	2 4
	3 6
	3 7
	3 9
	5 8
	8 9
	=> 1 2 4 3 6 7 9 5 8
	
	Input: Co huong
	9 10
	1 2 
	1 3
	1 5
	2 4
	3 6
	3 7
	5 8
	6 7
	8 9
	9 3
	=> 1 2 4 3 6 7 9 5 8
*/
