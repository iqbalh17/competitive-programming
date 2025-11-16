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
	vin v(n);
	cinvin(v);
	sort(all(v));
	
	bool cek = 0;

	if(v[0] != 0){
		cout << "NO" << endl;
		cek = 1;
	}
	else{
		map<int, int> map;
		FOR(i,0,100) map[i] = 0;
		for(auto i: v){
			map[i]++;
		}
		FOR(i,0,100){
			if(map[i] < map[i+1]){
				cout << "NO" << endl;
				cek = 1;
				break;
			}
		}
	}
	
	if(cek == 0) cout << "YES" << endl;
	
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
