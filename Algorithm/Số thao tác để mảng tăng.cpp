#include<bits/stdc++.h>
using namespace std;

int main(){

    long long int t;
    long long int n;
    cin>>t>>n;
    long long int a[t];
    for(int i=0;i<t;i++)
        cin>>a[i];
    long long int cnt=0;
    for(int i=1;i<t;i++)
    {
        if(a[i]<=a[i-1])
        {
            int tmp=(a[i-1]-a[i])/n+1;
            a[i]=a[i]+tmp*n;
            cnt+=tmp;
        }
    }
    cout<<cnt;
}
