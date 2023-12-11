/* Input :
10 dòng đầu tiên của input là 10 nguyên tố hóa học xuất hiện trong các công thức hóa học kèm nguyên tử khối của nó.
Dòng số 11 là T : số lượng công thức hóa học
T dòng tiếp theo là công thức hóa học của T chất
Output :
In ra phân tử khối của từng chất hóa học trên từng dòng
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> mp;
    for (int i = 0; i < 10; i++) {
        string s;
        int n;
        cin >> s >> n;
        mp[s] = n;
    }
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        int sum = 0;
        int i = 0;
        while (i < a.length()) {
            string res = "";
            if (isupper(a[i])) {
                res += a[i];
                i++;
                while (i < a.length() && islower(a[i])) {
                    res += a[i];
                    i++;
                }
                string count = "";
                while (i < a.length() && isdigit(a[i])) {
                    count += a[i];
                    i++;
                }
                if (count == "") {
                    count = "1";
                }
                sum += mp[res] * stoi(count);
            } else {
                i++;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
