#include<bits/stdc++.h>
using namespace std;

int cnt = 0;

void chuanHoa(string &s) {
    stringstream ss(s);
    string res="";
    string token;
    while(ss>>token) {
        token[0]=toupper(token[0]);
        for(int i=1; i<token.length(); i++) {
            token[i]=tolower(token[i]);
        }
        token+=" ";
        res+=token;
    }
    s =res;

}

class SinhVien {
    public:
        string msv, name, lop, bd;
        double gpa;
    public:
        SinhVien() {
            msv =name=lop=bd= "";
            gpa=0;
        }
        friend istream &operator >> (istream &, SinhVien &);
        friend ostream &operator << (ostream &, SinhVien );

};

istream &operator >> (istream &is, SinhVien &a) {
    ++cnt;
    is.ignore();
    if(cnt < 10) a.msv += "SV00" + to_string(cnt);                      // SV001 - SV050
    else a.msv += "SV0" +  to_string(cnt);
    getline(is, a.name);
    chuanHoa(a.name);
    getline(is, a.lop);
    getline(is, a.bd);
    if(a.bd[2] != '/') a.bd = "0" + a.bd;
    if(a.bd[5] != '/') a.bd =  a.bd.insert(3,"0");
    is>>a.gpa;
    return is;
}

ostream &operator << (ostream &os, SinhVien a) {
    os << a.msv << ' ' << a.name<< a.lop << ' ' << a.bd << ' ' << setprecision(2) << fixed << a.gpa << endl;
    return os;
}

bool cmp(SinhVien &a, SinhVien &b) {
    if (a.gpa == b.gpa) return a.msv < b.msv;
    return a.gpa > b.gpa;
}

void sapxep(SinhVien ds[], int n) {
    sort (ds, ds + n, cmp);

}

int main() {
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0; i<N; i++) {
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0; i<N; i++) {
        cout << ds[i];
    }
    return 0;
}
