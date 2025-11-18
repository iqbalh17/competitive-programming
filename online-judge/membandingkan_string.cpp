#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back
#define popb pop_back
#define F first
#define S second
#define len length
#define sz size
#define mp make_pair
#define all(v) v.begin(), v.end()
#define FOR(i,l,r) for(int i = l; i < r; i++)
#define FORR(i,l,r) for(int i = r; i >= l; i--)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);

void solve() {
	string a, b;
	getline(cin, a);
	getline(cin, b);	
//	int aj = 0, bj = 0;
//	int batas = max(a.len(), b.len());
//	FOR(i,0,batas){
//		if(a[i]){
//			char ax = tolower(a[i]);
//			aj += ax;
//			aj += 0;
//		}else{
//			aj += 0;
//		}
//		if(b[i]){
//			char bx = tolower(b[i]);
//			bj += bx;	
//		}else{
//			bj += 0;
//		}
//	}
////	cout << aj << " " << bj << endl;
////	if(a.len() > b.len()) cout << 1 << endl;
////	else if(a.len() < b.len()) cout << -1 << endl;
//	if(aj > bj) cout << 1 << endl;
//	else if(aj < bj) cout << -1 << endl;
//	else if(aj == bj) cout << 0 << endl;
	bool cek = 0;
	FOR(i,0,a.len()){
		if(tolower(a[i]) > tolower(b[i])) {
			cout << 1 << endl;
			cek = 1;
			break;
		}
		else if(tolower(a[i]) < tolower(b[i])){
			cout << -1 << endl;
			cek = 1;
			break;
		}
	}
	if(cek == 0) cout << 0 << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
