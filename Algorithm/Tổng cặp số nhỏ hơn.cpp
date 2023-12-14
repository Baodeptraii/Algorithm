#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a, a + n); 
    long long cnt = 0;
    long long left = 0, right = n - 1;

    while (left < right) {
        if (a[left] + a[right] < m) {
            cnt += right - left; 
            left++;
        } else {
            right--;
        }
    }

    cout << cnt;

    return 0;
}
