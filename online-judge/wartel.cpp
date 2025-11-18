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
	int n, q; cin >> n >> q;
	map<string, string> m;
//	m["j"] = 0;
	FOR(i,0,n){
		string s; cin >>s;
		string x; cin >> x;
		m[s] = x;
	}
	FOR(i,0,q){
		string s; cin >> s;
		if(m[s] == "") cout << "NIHIL" << endl;
		else cout << m[s] << endl;
	}
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
