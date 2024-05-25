#include <bits/stdc++.h>
using namespace std;

void generateSubsets(string s) {
    int n = s.size();
    int totalSubsets = 1 << n; // 2^n
    set<string>se;
    for (int mask = 0; mask < totalSubsets; ++mask) {
        string subset = "";
        for (int i = 0; i < n; ++i) {
            if (mask & (1 << i)) {
                subset += s[i];
            }
        }
        se.insert(subset);
    }
    for (auto x : se) {
        cout << x << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        generateSubsets(s);
    }
}
