#include <bits/stdc++.h>
using namespace std;

int a[100][100]={};
vector<int> adj[1001];
vector<pair<int,int>> edge;
int main(){
    cout<<"Nhap ma tran ke: ";
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            if(a[i][j]==1){
                edge.push_back({i,j});
            }
        }
    }
    cout<<"Danh sach canh : "<<endl;
    for(auto it : edge){
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"Danh sach ke: "<<endl;
    for(int i=1;i<=n;i++){
        cout<<i<<": ";
        for(int j=1;j<=n;j++){
            if(a[i][j] == 1){
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
}
