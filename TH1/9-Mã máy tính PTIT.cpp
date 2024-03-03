#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD (ll) 1000000007
int n,k;
string tmp="";
vector<string> label;
vector<string> id;
int dd[100] = {0};

void Try2(int i){
    for(int j=1;j<=n;j++){
        tmp += to_string(j);
        if(i==n){
            id.push_back(tmp);

        } else {
            Try2(i+1);
        }
        tmp.pop_back();
    }
}

void Try(int i){
    for(int c='A'; c<= 'A'+n-1;c++){
        if(!dd[c]){
            dd[c] = 1;
            tmp += c;
            if(i==n){
                label.push_back(tmp);
            }
            else {
                Try(i+1);
            }
            tmp.pop_back();
            dd[c] = 0;
        }
    }
}
int main()
{
    cin>>n;
    Try(1);
    Try2(1);
    for(auto x: label){
        for(auto y:id){
            cout<<x<<y<<endl;
        }
    }
    return 0;
}
/*

Input
2

Output


AB11

AB12

AB21

AB22

BA11

BA12

BA21

BA22
*/