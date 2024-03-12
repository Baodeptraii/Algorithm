#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;
vector<vector<int>> adj_list; 
vector<bool> visit; 
set<int> Vertices; 
void dfs(int u) {
    visit[u] = true;
    for(int v : adj_list[u]) {
        // Ð?nh chi?u u-v thành u->v
        adj_list[u].erase(remove(adj_list[u].begin(), adj_list[u].end(), v), adj_list[u].end());
        adj_list[v].push_back(u);

        if (!visit[v]) dfs(v);
    }
}

bool isDirectedGraph() {
    int n = adj_list.size();
    visit.assign(n, false); 
    for(int u : Vertices)
        if (!visit[u]) dfs(u);
    for(int u : Vertices)
        if (!visit[u]) return false;

    return true;
}

void inputGraph() {
    int n; 
    cout << "Nhap so dinh cua do thi: ";
    cin >> n;
    adj_list.resize(n); 
    cout << "Nhap ma tran ke cua do thi:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int x; 
            cin >> x;
            if(x > 0) { 
                adj_list[i].push_back(j); // Thêm j vào danh sách k? c?a i
                adj_list[j].push_back(i); // Thêm i vào danh sách k? c?a j
            }
        }
        Vertices.insert(i); 
    }
}

int main() {
    inputGraph(); 

    if(isDirectedGraph())
        cout << "Do thi dinh chieu duoc." << endl;
    else
        cout << "Do thi khong dinh chieu duoc." << endl;
    return 0;
}
