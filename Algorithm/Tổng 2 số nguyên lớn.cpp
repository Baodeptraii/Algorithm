#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s1, s2;
		cin>>s1>>s2;
		while(s1.length() < s2.length()) s1 = "0"+s1;
		while(s1.length() > s2.length()) s2 = "0"+s2;
		string res = "";
		int n=0;
		for(int i=s1.length()-1;i>=0;i--) {
			int tmp = s1[i]-'0'+s2[i]-'0'+n;
			n=tmp/10;
			tmp=tmp%10;
			res=(char)(tmp+'0')+res;
		}
		if(n>0) res="1"+res;
		cout<<res<<endl;

	}
}
