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

bool comp(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.F > b.F);
}

void solve() {
	int n; cin >> n;
	vector<pair<int, int>> v(n);
	FOR(i,0,n){
		int x; cin >> x;
		cin >> v[i].F;
		if(x > 10) v[i].F = 0;
		v[i].S = i;
	}
	
	sort(all(v), comp);
	
	cout << v[0].S + 1 << endl;
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
