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

void solve() {
	int n; cin >> n;
	vector<double> v(n);
	for(auto &i: v) cin >> i;
	sort(all(v));
	double ans;
	if(n%2 == 0){
		ans = (v[n/2]+v[(n/2)-1])/2;
	}else ans = v[n/2];
	cout << fixed << setprecision(1) << ans << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
