#include <bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--){
        int n, s, m;
        cin >> n >> s>> m;
        if ( s * m > (s - s/7)*n){ // C?n nhi?u h�n c� th? mua 
            cout<<-1<<endl;
        } else {
            for(int i=1;i<= s - s/7;i++){
                if(n*i >= s*m) { // �i mua t? th? 2, �? ph�t th? th�i k mua n?a :v
                    cout<<i<<endl; 
                    break;
                }
            }
                
        }

   }
}
