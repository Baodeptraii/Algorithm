#include <bits/stdc++.h>
using namespace std;
struct sinhvien{
	string name, dantoc;
	double diem;
	int khuvuc;
	string mts;
};
void chuHoa(string &s) {
    for(int i=1; i<=s.length()-1; i++) {
    	if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
	}        
    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] -= 32;
    for(int i=1; i<=s.length()-1; i++)
        if(s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z')
            s[i+1] -= 32;
}
void chuanXau(string &s) {
	chuHoa(s);
    while(s.find("  ") >= 0) {
        int p = s.find("  ");
        if(p >= 0)
            s.erase(p,1);
        else break;
    }
    if(s[0] == ' ')
        s.erase(0,1);
    if(s[s.length()] == '  ')
        s.erase(s.length(),1);
}

bool cmp(sinhvien sv1, sinhvien sv2) {
	return sv1.diem > sv2.diem;
}


int main() {
	int t;
	cin>>t;
	sinhvien sv[t];
	for(int i=0;i<t;i++) {
		sv[i].mts = "TS0"+to_string(i+1);
		cin.ignore();
		getline(cin, sv[i].name);
		chuanXau(sv[i].name);
		cin>>sv[i].diem;
		cin>>sv[i].dantoc;
		cin>>sv[i].khuvuc;
		
		string kinh = "Kinh";
		if(sv[i].khuvuc == 1) {
			sv[i].diem += 1.5;
		} else if (sv[i].khuvuc == 2) {
			sv[i].diem += 1.0;
		}
		if(sv[i].dantoc != kinh ) {
			sv[i].diem += 1.5;
		}
	}
	sort(sv,sv+t,cmp);
	for(int i=0;i<t;i++) {
		cout<<sv[i].mts<<" "<<sv[i].name<<" "<<sv[i].diem;
		if(sv[i].diem > 20.5) cout<<" Do\n";
		else cout<<" Truot\n";
	}
}


