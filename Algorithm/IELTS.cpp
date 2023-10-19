#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define rFOR(i,a,b) (int i=a;i>=b;i--)
#define int unsigned long long
#define INTREAL int
#define endl '\n'
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n,m,k;

using namespace std;

bool from(int ch, int a,int b){
    return (a<=ch && ch <= b);
}

float calc(int n){
    if(from(n,3,4)) return 2.5;
    if(from(n,5,6)) return 3.0;
    if(from(n,7,9)) return 3.5;
    if(from(n,10,12)) return 4;
    if(from(n,13,15)) return 4.5;
    if(from(n,16,19)) return 5;
    if(from(n,20,22)) return 5.5;
    if(from(n,23,26)) return 6;
    if(from(n,27,29)) return 6.5;
    if(from(n,30,32)) return 7.0;
    if(from(n,33,34)) return 7.5;
    if(from(n,35,36)) return 8.0;
    if(from(n,37,38)) return 8.5;
    if(from(n,39,40)) return 9.0;
    return 0;
}

signed main()
{

    FASTER;
    int lq, rq;
    float wp, sp;
    int t;
    cin >> t;
    while(t--){
        cin >> rq >> lq >> sp >> wp;
        float ave = (calc(rq) + calc(lq) + wp + sp) / 4;
        float rd = (float) (ceil(ave*10000))/10000;
        float kc = abs(rd - ((INTREAL) rd));
        float res = (INTREAL) (rd);
        if(kc>=0.25 && kc<0.75) res+= 0.5;
        if(kc>=0.75)res+= 1;
        cout << setprecision(1) << fixed << res << endl;
    }
}
