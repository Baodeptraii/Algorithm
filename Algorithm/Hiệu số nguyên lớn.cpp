#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s1,s2;
		cin>>s1>>s2;
		//them so 0 cho du phep tinh
		int len = max(s1.length(), s2.length());
		while(s1.length() < s2.length()) s1 = "0"+s1;
		while(s1.length() > s2.length()) s2 = "0"+s2;
		if(s1 < s2) swap(s1, s2); //tim so lon hon

		string res="";
		int n=0;

		for(int i=len-1; i>=0; i--) {
			int temp = (s1[i]-'0') - (s2[i]-'0') - n;
			if(temp < 0) {
				temp += 10;
				n = 1;
			} else {
				n = 0;
			}
			res=(char)(temp+'0') + res;
		}

		cout<<res<<endl;
	}
}



