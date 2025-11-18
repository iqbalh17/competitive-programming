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

bool sortbysec(pair<double,double> &a, pair<double,double> &b){
	return (a.S>b.S);
}

void solve() {
	int n, x; cin >> n >> x;
	vector<pair<double,double>> kg(n);
	for(auto &i: kg) cin >> i.F;
	FOR(i,0,n){
		int x; cin >> x;
		kg[i].S = x/kg[i].F;
	}
	sort(all(kg), sortbysec);
	double ans;
	int cur = 0;
	FOR(i,0,n){
		if(cur == x) break;
		if(kg[i].F > x - cur){
			ans += kg[i].S*(x-cur);
			cur += x-cur;
		}else{
			ans += kg[i].S*kg[i].F;
			cur += kg[i].F;
		}
	}
	cout << fixed << setprecision(5) << ans << endl; 
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
