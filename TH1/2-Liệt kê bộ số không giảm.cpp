#include <bits/stdc++.h>
using namespace std;

void test(vector<int>& current, int n, int k, int start){
    if(current.size()==k){
        for(int num : current){
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=start; i<=n; i++){
        current.push_back(i);
        test(current, n, k, i+1-1);
        current.pop_back();
    }
}

int main() {
    int n,k;
    cin>>n>>k;
    vector<int> test1;
    test(test1, n, k, 1);

    return 0;
}

/*
Input
3 3

Output


1 1 1

1 1 2

1 1 3

1 2 2

1 2 3

1 3 3

2 2 2

2 2 3

2 3 3

3 3 3
*/