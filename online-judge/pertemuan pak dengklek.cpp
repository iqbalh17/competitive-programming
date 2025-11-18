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

//bool custom(pair<string)

void solve() {
	int n; cin >> n;
	vector<pair<int,string>> v(n);
	FOR(i,0,n){
		cin >> v[i].S;
		v[i].F = v[i].S.len(); 
	}
	sort(all(v));
	for(auto i: v) cout << i.S << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
