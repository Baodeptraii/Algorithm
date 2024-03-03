#include <bits/stdc++.h>
using namespace std;


vector<int> generate_permutations(int N) {
    string N_str = to_string(N);
    vector<int> digits;
    for(char c : N_str) {
        digits.push_back(c - '0');
    }
    sort(digits.begin(), digits.end());
    unordered_set<int> permutations_set;
    do {
        int perm = 0;
        for(int d : digits) {
            perm = perm * 10 + d;
        }
        permutations_set.insert(perm);
    } while(next_permutation(digits.begin(), digits.end()));
    vector<int> permutations(permutations_set.begin(), permutations_set.end());
    return permutations;
}

int main() {
    int num_tests;
    cin >> num_tests;
    
    for(int i = 0; i < num_tests; ++i) {
        set<int> s;
        int N;
        cin >> N;
        vector<int> permutations_N = generate_permutations(N);
        for(int perm : permutations_N) {
            // cout << perm << endl;
            s.insert(perm);
        }
        for(auto x: s){
            cout << x << endl;
        }
    }

    return 0;
}
/*

Input
2

21

104
Output



12

21

14

41

104

140

401

410
*/
