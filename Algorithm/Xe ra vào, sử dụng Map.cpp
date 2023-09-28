#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin>>n;
	string bs,ten,dc,ngay;
	int ghe;
	map<string,int> m;
	for(int i=0; i<n; i++) {
		cin>>bs>>ten>>ghe>>dc>>ngay;

		if(ten=="Xe_con") {
			if(dc=="IN") {
				if(ghe==5) {
					m[ngay]+=100000;
				} else {
					m[ngay]+=150000;
				}
			}
		} else if(ten=="Xe_tai" && dc=="IN") {
			m[ngay]+=200000;
		} else if (ten=="Xe_khach") {
			if(dc=="IN") {
				if(ghe==29) {
					m[ngay]+=50000;
				} else {
					m[ngay]+=70000;
				}
			}
		}
	}
	for(map<string,int>::iterator it = m.begin();it!=m.end();it++) {
		cout<<it->first<<": "<<it->second<<endl;
	}
	


}
