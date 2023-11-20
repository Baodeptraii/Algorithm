#include <bits/stdc++.h>
using namespace std;

string chuanHoa(string s){
	string token;
	string res="";
	stringstream ss(s);
	while(ss >> token){
		res+=toupper(token[0]);
		for(int i=1;i<token.length();i++){
			res+=tolower(token[i]);
		}
		res+=" ";
	}
	// sẽ thừa 1 dấu " " ở cuối, có thể dùng erase để xóa 
	return res;
}

void strupr(string &s) {
	for (int i = 0; i < s.length(); i++) {
		s[i] = toupper(s[i]);
	}
}

int main() {
	string s[100];
	int index = 0;
	while (cin >> s[index])	index++;
	for (int i = 0; i < index; i++) {
		for (int j = 0; j < s[i].length(); j++) {
			s[i][j] = tolower(s[i][j]);
		}
		s[i][0] = toupper(s[i][0]);

	}
	for (int i = 0; i < index-2; i++) {
		cout<<s[i]<<" ";
	}
	cout<<s[index-2];
	cout<<", ";
	for (int i = index-1; i < index; i++) {
		for (int j = 0; j < s[i].length(); j++) {
			s[i][j] = toupper(s[i][j]);
		}

		cout<<s[i];
	}
	// cout<<s;
}
