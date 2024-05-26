#include <bits/stdc++.h> // 1 - Thay the dau ngoac AC
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        cin >> s;
        stack<int> st;
        int a[1005]= {0};
        for(int i = 0 ; i< s.size() ; i++) {
            a[i] = 0;
        }
        for(int i = 0 ; i< s.size() ; i++) {
            if(s[i] == '('){
                st.push(i);
            }
            else if ( s[i] == ')'){
                if(!st.empty() ){
                    a[i] = 1;
                    a[st.top()] = 0;
                    st.pop();
                } else {
                    a[i] = -1;
                }
            }
        }
        while(!st.empty()){
            int p = st.top();
            a[p] = -1;
            st.pop();
        }
        for(int i = 0 ;i< s.size();i++){
            if(s[i] == '(' || s[i] == ')'){
                cout << a[i] ;
            } else {
                cout << s[i] ;
            }
        }
        cout << endl;
    }
}
