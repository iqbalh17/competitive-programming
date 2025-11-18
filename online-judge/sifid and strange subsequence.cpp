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
 vector<int> v(n);
 for(auto &i: v) cin >> i;
 int x, y, biggest = -9999999, lowewr = 9999999, cnt = 1;
 int idx = 1;
 x = v[0];
 while(idx < n-2){
 	y = v[idx];
	if(max(x,y) > biggest) biggest = max(x,y);
	if(abs(x-y) >= biggest) 
 }
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
