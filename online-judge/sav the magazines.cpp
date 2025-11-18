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

int n; 
vector<char> lid;
vector<bool> cek;
vector<int> v;

void solve() {
	cin >> n;
	lid.resize(n);
	cek.resize(n);
	v.resize(n);
	FOR(i,0,n){
		cin >> lid[i];
		if(lid[i] == '0') cek[i] = 0;
		else cek[i] = 1;
	}
	for(auto &i: v) cin >> i;
	
	mag()
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
