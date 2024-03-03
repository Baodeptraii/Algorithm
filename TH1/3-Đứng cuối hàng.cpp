#include <bits/stdc++.h>
using namespace std;
#define ll long long

int dd[100] = {0};
int n;
vector<string> v;
vector<string> temp;
vector<vector<string>> res;

void Try(int i)
{
    for (int j = 0; j < n; j++)
    {
        if (!dd[j])
        {
            temp.push_back(v[j]);
            dd[j] = 1;

            if (i == n - 1)
            {
                res.push_back(temp);
            }
            else
            {
                Try(i + 1);
                
                // dd[j] = 0;
            }

            dd[j] = 0;
            temp.pop_back();
        }
    }
}
int main()
{
    cin >> n;
    v.resize(n);
    for (auto &i : v)
        cin >> i;
    sort(v.begin(), v.end());
    string last;
    cin >> last;

    for (int i = 0; i < n; i++)
    {
        if (last == v[i])
        {
            dd[i] = 1;
            break;
        }
    }
    Try(1);
    for (auto x : res)
    {
        for (auto i : x)
            cout << i << " ";
        cout << last << endl;
    }
}
/*
Input
4

DONG TAY NAM BAC

NAM

Output

BAC DONG TAY NAM

BAC TAY DONG NAM

DONG BAC TAY NAM

DONG TAY BAC NAM

TAY BAC DONG NAM

TAY DONG BAC NAM
*/