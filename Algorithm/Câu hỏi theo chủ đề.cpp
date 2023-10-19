#include <bits/stdc++.h>
using namespace std;
  
void solve (){
    int n;
    cin >> n;
    vector <string> s;
    cin.ignore ();
    for (int i = 0; i < n; ++i){
        string x;
        getline (cin, x);
        s.push_back (x);
    }
    s.push_back ("");
 
    int cnt = 0;
    for (int i = 0; i < s.size (); ++i){
        if (s[i].size () != 0){
            ++ cnt;
        } else if (s[i].size () == 0) {
            cout << s[i - cnt] <<": " << cnt - 1 << '\n';
            cnt = 0;
        }
 
    }
 
 
}
 
int main (){   
    
        solve ();
    
}
