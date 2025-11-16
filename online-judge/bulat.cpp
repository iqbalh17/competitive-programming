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
	string s; cin >> s;
	int cnt = 0;
	FOR(i,0,s.len()){
		if(s[i] != '0') cnt++;
	}
	cout << cnt << endl;
	FOR(i,0,s.len()){
		if(s[i] != '0'){
			string si = "";
			si += s[i];
			FOR(k,0,s.len()-i-1) si += '0';
			cout << si << " ";
		}
	}
	cout << endl;
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
