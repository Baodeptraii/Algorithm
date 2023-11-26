#include<bits/stdc++.h>
using namespace std;
int n,X[100],ok;
void ktao(){
	for(int i=1;i<=n;i++){
		X[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i>=1 && X[i]==1){
		X[i]=0;
		--i;
	}
	if(i==0){
		ok=0;
	}
	else{
	X[i]=1;	
	}
}
int main(){
	cin>>n;
	ktao();
	ok=1;
	while(ok){
		for(int i=1;i<=n;i++){
			cout<<X[i];
		}
		cout<<endl;
		sinh();
	}
		
	
}
