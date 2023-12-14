/*Sample Input 0
5
4x^2 + 1x^0 + 5x^2 + 1x^1 + 4x^2 + 5x^3 + 2x^3 + 2x^4 + 3x^4
1x^2 + 2x^1 + 4x^1 + 5x^2 + 5x^2
1x^0 + 1x^3 + 2x^2 + 4x^2 + 4x^3 + 3x^1
2x^3 + 4x^2 + 5x^0 + 2x^1 + 4x^1 + 1x^1 + 3x^3 + 2x^2 + 1x^4
1x^4 + 4x^4 + 3x^3 + 4x^0 + 5x^1 + 4x^1 + 1x^4 + 2x^2 + 1x^4

Sample Output 0
1x^0 + 1x^1 + 13x^2 + 7x^3 + 5x^4
6x^1 + 11x^2
1x^0 + 3x^1 + 6x^2 + 5x^3
5x^0 + 7x^1 + 6x^2 + 5x^3 + 1x^4
4x^0 + 9x^1 + 2x^2 + 3x^3 + 7x^4
*/
#include <bits/stdc++.h>
using namespace std;

void solve(string s) {
	map<int,int> mp;
	stringstream ss(s);
	string temp;
	while(ss >> temp) {
		if(temp!="+") {
			int heso=0, mu =0;
			int i=0;
			while(i<temp.size() && isdigit(temp[i])) {
				heso = heso*10 + temp[i] -'0';
				i++;
			}
			i+=2;
			while(i<temp.size() && isdigit(temp[i])) {
				mu = mu*10 + temp[i]-'0';
				i++;
			}
		//	cout<<heso<<" "<<mu<<endl;
			mp[mu]+=heso;
		}
	}
	int dem=0;
	for(auto x: mp) {
		dem++;
		cout<<x.second<<"x^"<<x.first;
		if(dem!=mp.size()) {
			cout<<" + ";
		}
	}
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s;
		getline(cin ,s);
		solve(s);
		cout<<endl;
	}
}
