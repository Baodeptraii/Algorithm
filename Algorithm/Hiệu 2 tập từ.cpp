#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<string> split(string s) {
	vector<string> words;
	stringstream ss(s);
	string token;
	while(ss>>token) {
		words.push_back(token);
	}
	return words;
}

int main() {
	int t;
	cin>>t;
	cin.ignore();
	while(t--) {
		string s1, s2;
		getline(cin,s1);
		getline(cin,s2);
		vector<string> words1 = split(s1);
		vector<string> words2 = split(s2);

		set<string> res;
		for(auto word: words1) {
			res.insert(word);
		}
		for(auto word: words2) {
			res.erase(word);
		}
		for(auto word: res) {
			cout<<word<<" ";
		}
		cout<<endl;



	}
}
