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
	Input:
	10 11
	1 2
	1 3
	1 5
	1 10
	2 4
	3 6
	3 7
	3 9
	6 7
	5 8
	8 9
	=> 1 2 3 5 10 4 6 7 9 8
*/
