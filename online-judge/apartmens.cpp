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
	int n, m, k; cin >> n >> m >>k;
	vin v(n);
	vin p(m);
	for(auto &i: v) cin >> i;
	for(auto &i: p) cin >> i;
	sort(all(v));
	sort(all(p));
	int first = 0, second = 0, cnt = 0;
	while(first < n && second < m){
		if(abs(v[first] - p[second]) <= k){
			cnt++;
			first++;
			second++;
		}else if(p[second] < v[first]){
			second++;
		}else{
			first++;
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
