#include <bits/stdc++.h>
using namespace std;

const int N = 1000005;
bool check[N];
vector<int> snt;

int main() {
	for(int i=2;i<=N;i++) {
		check[i]=1;
	}
	for(int i=2;i<=N;i++) {
		if(check[i]) {
			for(int j=i*2;j<=N;j+=i) {
				check[j]=0;
			}
		}
	}
	for(int i=2;i<N;i++) {
		if(check[i])
			snt.push_back(i);
	}
	
	for(int i=0;i<10;i++) cout<<snt[i]<<endl;
}


