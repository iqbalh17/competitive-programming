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
	int n, x; cin >> n >> x;
	vector<pair<int,int>> v(n);
	FOR(i,0,n){
		cin >> v[i].F;
		v[i].S = i+1;
	}
	sort(all(v));
	int i = 0, l = n-1;
	bool cek = 0;
	while(i < l){
		if(v[i].F + v[l].F == x){
			cout << v[i].S << " " << v[l].S << endl;
			cek = 1;
			break; 
		}
		if(v[i].F + v[l].F < x)i++;
		else l--;
	}
	if(!cek) cout << "IMPOSSIBLE" << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
