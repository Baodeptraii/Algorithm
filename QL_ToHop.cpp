#include<bits/stdc++.h>

using namespace std;

int n,k,x[100];
void hienthi(){
	for(int j=1;j<=k;j++){
		cout<<x[j]<<" ";
		
	}
	cout<<endl;
}

void Try(int i){
	for(int j=x[i-1]+1;j<=n-k+i;j++){
		x[i]=j;
		if(i==k) hienthi();
		else Try(i+1);
	}
}
int main(){
	do{
		cout<<"n= ";cin>>n;
		cout<<"k= ";cin>>k;
		
	}while(n<k);
	x[0]=0;
	Try(1);
	
}
