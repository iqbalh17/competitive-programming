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
	vector<int> v(3);
	FOR(i,0,3) cin >> v[i];
	sort(all(v));
	if(v[2] <= v[0] + v[1]){
		cout << (v[0] + v[1] + v[2]) / 2 << endl;
	}else{
		cout << v[1] + v[0] << endl;
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
