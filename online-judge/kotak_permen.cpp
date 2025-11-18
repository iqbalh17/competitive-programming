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
	vector<int> v(n+1, 0);
	int x;
	FOR(i,1,n+1){
		cin >> x;
		v[x]++;
	}
//	FOR(i,1,n+1) cout << v[i] << endl;
	sort(all(v), greater<int>());
//	FOR(i,1,n+1) cout << v[i] << endl;
	int idx = 1;
	int total = 0;
	total += v[0];
	for(int i = 1; i < n; i++){
		if(v[i] == 0) break;
		else if(v[i] == v[i-1] && idx < v[i]){
			total += (v[i] - idx);
			idx++;	
		} 
		else if(v[i] != v[i-1] && idx <= v[i]) {
			total += v[i];
		}
	}
	cout << total << endl;
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
