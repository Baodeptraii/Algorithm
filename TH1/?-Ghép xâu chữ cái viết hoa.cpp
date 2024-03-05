#include <bits/stdc++.h>
using namespace std;

int n, x[100];
vector<string>v;

void Try(int j) {
    // Sinh nhị phân với các kết quả thuộc kiểu string "0000", "0001", ...
	for(int i=0; i<=1; i++) {
		string s="";
		x[j] = i;
		if(j == n) {
			for(int l=1; l<=n; l++) {
				s+=to_string(x[l]);
			}
			v.push_back(s);
		} else {
			Try(j+1);
		}
	}
}

int main() {
	cin>>n;
	Try(1);
	string s[n];
	set<string> se;
    // Nhập các chuỗi đề bài
	for(int i=0; i<n; i++) {
		cin>>s[i];
	}
	for(auto x:v) {
        // Nếu là xâu nhị phân chứa số "1" thì mới thêm chuỗi vào set 
		string m="";
		for(int i=0; i<n; i++) {
			if(x[i]=='1') {
				m+=s[i];
			}
		}
		se.insert(m);
	}
    // Set sẽ tự sắp xếp các chuỗi theo thứ tự trước / sau
	for(auto x:se)
		cout<<x<<endl;
}
