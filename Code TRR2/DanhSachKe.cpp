#include <bits/stdc++.h>
using namespace std;

int a[100][100]={};
vector<int> adj[1001];
vector<pair<int,int>> edge;
int main(){
    cout<<"Nhap vao danh sach ke: ";
    int n;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        string s, num;
        getline(cin,s);
        stringstream ss(s);
        while (ss >> num)
        {
           a[i][stoi(num)] = 1;
           if(stoi(num) > i){
            edge.push_back({i,stoi(num)});
           }
        }        
    }
    cout<<"Ma tran ke: "<<endl;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Danh sach canh : "<<endl;
    for(auto it : edge){
        cout<<it.first<<" "<<it.second<<endl;
    }
}
