#include<bits/stdc++.h>

using namespace std;

int n,x[100];
bool a[100];
void khoitao(){
	cout<<"n= ";cin>>n;
	for(int i=1;i<=n;i++){
		a[i]=true;
	}
}
void hienthi(){
	for(int i=1;i<=n;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
}

void Try(int i){
	for(int j=1;j<=n;j++){
		if(a[j]){
			x[i]=j;
			a[j]=false;
			if(i==n) hienthi();
			else Try(i+1);
			a[j]=true;
		}
	}
}

main(){
	khoitao();
	Try(1);
}
