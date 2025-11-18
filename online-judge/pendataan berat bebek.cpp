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
	int n, q;
	cin >> n;
	vin bebek(n);
	for(auto &i: bebek) cin >> i;
	cin >> q;
//	vector<pair<int, int>> antre(q);
//	for(auto &i: antre) cin >> i.F >> i.S;
//	
	FOR(i,0,q){
		int x, y; cin >> x >> y;
		int minim = upper_bound(all(bebek), x) - bebek.begin();
		int maxim = upper_bound(all(bebek), y) - bebek.begin();
		cout << maxim - minim << endl;
	}
//	cout << bebek.begin() << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
