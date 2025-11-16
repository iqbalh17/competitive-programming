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
 int n, m; cin >> n >> m;
 vin v(n+1, 0);
 FOR(i,1,n+1) cin >> v[i];
 sort(all(v));
 FOR(i,0,m){
 	int x; cin >> x;
 	int temp = upper_bound(all(v), x) - v.begin();
 	if(temp == 1){
 		cout << -1 << endl;
 		continue;
	 }
 	if(v[temp] == x){
 		cout << v[temp] << endl;
		v[temp] = 1e16;
		sort(all(v));
	 }else{
	 	cout << v[temp-1] << endl;
		v[temp-1] = 1e16;
		sort(all(v));
	 }
 	}
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
