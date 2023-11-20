#include <bits/stdc++.h>
using namespace std;
bool nn(int nam){
	if(nam%4==0&&nam%100!=0) return true;
	if(nam%400==0) return true;
	else return false;
}
void muaB(int nam,int ngay){
	if(nn(nam)){
		if(ngay>31 &&ngay<122) cout<<"Xuan"<<endl;
		else if(ngay>121&&ngay<214) cout<<"He"<<endl;
		else if(ngay>213 &&ngay<306) cout<<"Thu"<<endl;
		else cout<<"Dong"<<endl;
	}
	else{
		if(ngay>31 && ngay<121) cout<<"Xuan"<<endl;
		else if(ngay>120&&ngay<213) cout<<"He"<<endl;
		else if(ngay>212 &&ngay<305) cout<<"Thu"<<endl;
		else cout<<"Dong"<<endl;
	}	
}
void muaN(int nam,int ngay){
	if(nn(nam)){
		if(ngay>121&&ngay<306) cout<<"Mua"<<endl;
		else cout<<"Kho"<<endl;
	}
	else {
		if(ngay>120&&ngay<305) cout<<"Mua"<<endl;
		else cout<<"Kho"<<endl;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		if(s=="Bac"){
			int nam,ngay;
			cin>>nam>>ngay;
			muaB(nam,ngay);
			}
		if(s=="Nam"){
			int n,ng;
			cin>>n>>ng;
			muaN(n,ng);
		}	
		}
}
