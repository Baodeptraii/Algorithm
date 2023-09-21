#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> a[i][j];
      }
    }
    int b[n * m], check = 0;
    int tren = 0, duoi = n, trai = 0, phai = m;
    int cnt = 1;
    while (cnt <= m * n)
    {
      for (int i = trai; i < phai; i++)
      {
        b[check] = a[tren][i];
        check++;
        cnt++;
      }

      for (int i = tren + 1; i < duoi; i++)
      {
        b[check] = a[i][phai - 1];
        check++;
        cnt++;
      }

      for (int i = phai - 2; i >= trai; i--)
      {
        b[check] = a[duoi - 1][i];
        check++;
        cnt++;
      }

      for (int i = duoi - 2; i > tren; i--)
      {
        b[check] = a[i][trai];
        check++;
        cnt++;
      }
      tren++;
      duoi--;
      phai--;
      trai++;
    }
    for (int i = 0; i < n * m; i++)
    {
      cout << b[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
