#include <bits/stdc++.h>
using namespace std;
#define ll long long

int n;
vector<string> res;
void Try(string s, int cnt1, int cnt2, int cnt3) {
	if(s.length() <= n) {
		if(cnt1 && cnt2 && cnt3 && cnt1 <= cnt2 && cnt2 <= cnt3) {
			res.push_back(s);
		}
		if(s.length() == n) {
			return ;
		}
	}
	Try(s + 'A', cnt1 + 1, cnt2, cnt3);
	Try(s + 'B', cnt1, cnt2 + 1, cnt3);
	Try(s + 'C', cnt1, cnt2, cnt3 + 1);
}
int main() {
	cin >> n;
	Try("",0,0,0);
	sort(res.begin(), res.end(), [](string a, string b) {
		if(a.size() == b.size()) {
			return a <= b;
		} else {
			return a.size() < b.size();
		}
	});
	for(auto x :res ) cout<<x<<endl;
}
/*
Input
4

Output


ABC

ACB

BAC

BCA

CAB

CBA

ABCC

ACBC

ACCB

BACC

BCAC

BCCA

CABC

CACB

CBAC

CBCA

CCAB

CCBA
*/