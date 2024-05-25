#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int n, s;
    cin >> n >> s;
    int s1 = s;
    // n = 100;
    // s = 900;
    if (s == 0 && n > 1)
    {
        cout << "-1 -1" << endl;
        return 0;
    }

    string Max = "";
    string Min = "";

    if (s <= n * 9 && s > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for(int j = 9 ; j >= 1; j--){
                if( (s - j) <= (n-i) * 9 && (s - j) > 0) {
                    Min = to_string(j) + Min;   
                    s = s - j;
                    break;
                }
            }
        }
        if( s > 0 && Min.length() < n){
            while( Min.length() + 1 < n){
                Min = "0" + Min;
            }
            Min = to_string(s) + Min;
        }
    } else {
        Min = "-1" ;
    }

    s = s1;

    if (s <= n * 9 && s > 0)
    {
        for (int i = 1; i <= n; i++)
        {
            for(int j = 9 ; j >= 1; j--){
                if( (s - j) <= (n-i) * 9 && (s - j) >= 0) {
                    Max =  Max + to_string(j);
                    s = s - j;
                    break;
                }
            }
        }
        if( s > -1 && Max.length() < n ){
            Max = Max + to_string(s);
            while( Max.length()  < n){
                Max = Max + "0";
            }
        }
    } else {
        Max = "-1" ;
    }
    cout << Min << " " << Max << endl;
}
