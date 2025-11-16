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
	int n, q, k; cin >> n >> q >> k;
	vector<int> v(n);
	FOR(i,0,n) cin >> v[i];
	vector<pair<int, int>> query(q);
	FOR(i,0,q){
		cin >> query[i].F;
		cin >> query[i].S;
	}
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
