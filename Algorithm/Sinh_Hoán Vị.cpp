#include<bits/stdc++.h>

using namespace std;

void HvKe(int a[],int n){
	for(int i=1;i<=n;i++){
		a[i]=i;
	}
	while(1){
		for(int i=1;i<=n;i++){
			cout<<a[i]<<" ";
			cout<<endl;
		
		i=n-1;
		while(i>0&&a[i]>a[i+1]) i--;
		if(i==0) return;}
	}
	int k=n;
	while(a[k]<a[i]) k--;
	int tmp=a[i];
	a[i]=a[k];
	a[k]=tmp;
	int I=i+1;
	int r=n;
	while(L<r){
		tmp=a[I];
		a[I]=a[r];
		a[r]=tmp;
		I++;r++}
	}
}
int main(){
	int a[100];
	int n;
	cin>>n;
	HvKe(a,n);
}
