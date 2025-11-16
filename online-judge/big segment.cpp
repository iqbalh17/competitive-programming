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
	int n; cin >> n;
	vector<pair<int,int>> v(n);
	FOR(i,0,n) cin >> v[i].F >> v[i].S;
	int max = -999999999;
	int min = 9999999999;
	int idx = -1;
	FOR(i,0,n){
		if(v[i].F <= min) min = v[i].F;
		if(v[i].S >= max) max = v[i].S;
	}
	FOR(i,0,n)
		if(v[i].F == min && v[i].S == max) idx = i+1;
	if(idx != -1) cout << idx << endl;
	else cout << -1 << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
