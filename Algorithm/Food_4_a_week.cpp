#include <bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--){
        int n, s, m;
        cin >> n >> s>> m;
        if ( s * m > (s - s/7)*n){ // C?n nhi?u hõn có th? mua 
            cout<<-1<<endl;
        } else {
            for(int i=1;i<= s - s/7;i++){
                if(n*i >= s*m) { // Ði mua t? th? 2, ð? phát th? thôi k mua n?a :v
                    cout<<i<<endl; 
                    break;
                }
            }
                
        }

   }
}
