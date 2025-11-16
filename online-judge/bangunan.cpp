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
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for(auto &i: v) cin >> i;
	int temp = 0;
	FOR(i,0,k) temp += v[0+i];
	int lowest = temp;
//	cout << temp << endl;
	int idx = 0;
	FOR(i,1,n-(k-1)){
		temp = (temp - v[i-1]) + v[i+(k-1)];
		if(temp < lowest) {
			lowest = temp;
			idx = i;
		}
	}
	cout << idx + 1 << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
