#include <bits/stdc++.h> // 3 - Hinh chu nhat don sac AC
using namespace std;
using ll = long long;

ll max_area(ll a[], ll m){
    ll ans = -1;
    stack<int> st;
    for(ll i = 0; i<m;i++){
        if(st.empty()){
            st.push(i);
        } else {
            if(a[i] >= a[st.top()]){
                st.push(i);
            } else {
                while(!st.empty() && a[i] < a[st.top()]){
                    ll top = st.top();
                    st.pop();
                    if(st.empty()){
                        ans = max(ans, a[top]*i);
                    } else {
                        ans = max(ans, a[top]*(i-st.top()-1));
                    }
                }
            }
            st.push(i);
        }
    }
    while(!st.empty()){
        ll top = st.top();
        st.pop();
        if(st.empty()){
            ans = max(ans, a[top]*m);
        } else {
            ans = max(ans, a[top]*(m-st.top()-1));
        }
    }
    return ans;
}

int main(){
    ll n ,m;
    cin >> n >> m;
    ll a[m], b[m], res = -1;
    for(auto &x : a){
        cin >> x;
    }
    for(ll i = 0 ;i<m;i++){
        b[i] = n - a[i];
    }
    res = max(res, max_area(a, m));
    res = max(res, max_area(b, m));
    cout << res << endl;
    return 0;
}
