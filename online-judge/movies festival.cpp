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
#define vin vector<int>
#define cinvin(v) for(auto &i: v) cin >> i;

void solve() {
	int n; cin >> n;
	int a, b, cnt = 1;
	vector<pair<int, int>> v;
	FOR(i,0,n){
		cin >> a >> b;
		v.pb(mp(b, a));
	}
	sort(all(v));
	int cur = v[0].F;
	FOR(i,1,v.size()){
		if(v[i].S >= cur){
			cnt++;
			cur = v[i].F;
		}
	}
	cout << cnt << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
