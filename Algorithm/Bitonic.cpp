#include <bits/stdc++.h> // Bitonic
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int DayTang[n];
        int DayGiam[n];
        for (int i = 0; i < n; i++)
        {
            DayTang[i] = a[i];
            DayGiam[i] = a[i];
        }
        for(int i = 1; i < n; i++){
            for(int j = 0;j < i; j++){
                if ( a[i] > a[j] && DayTang[i] < DayTang[j] + a[i]){
                    DayTang[i] = DayTang[j] + a[i];
                }
            }
        }
        for(int i = n - 2; i >= 0; i--){
            for(int j =  n- 1 ;j > i; j--){
                if ( a[i] > a[j] && DayGiam[i] < DayGiam[j] + a[i]){
                    DayGiam[i] = DayGiam[j] + a[i];
                }
            }
        }
        int res = INT_MIN;
        for(int i = 0 ;i < n ;i++){
            res = max(res, DayGiam[i] + DayTang[i] - a[i]);
        }
        cout << res << endl;
    }
}