#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

void thapHN( int n,char a,char b,char c){
    if(n==1){
        cout<<a<<" -> "<<c<<endl;
        return ;
    }
    thapHN(n-1,a,c,b);
    thapHN(1,a,b,c);
    thapHN(n-1,b,a,c);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    char a = 'A', b = 'B', c = 'C';
    thapHN(n,a,b,c);
}
