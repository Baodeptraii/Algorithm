#include <bits/stdc++.h>
using namespace std;

int a[100][100]={};
vector<int> adj[1001];
vector<pair<int,int>> edge;
int main(){
    cout<<"Nhap vao danh sach canh: ";
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++){
            int x,y;
            cin>>x>>y;
            adj[x].push_back(y);
            adj[y].push_back(x);
            a[x][y] = a[y][x] = 1;
    }
    cout<<"Danh sach ke: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<": ";
        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Ma tran ke: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}
