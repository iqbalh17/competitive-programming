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
	if(v[0] > v[1]){
		cout << "NO" << endl;
	}else if(v[0] == v[1] && v[1] > v[2]){
		cout << "NO" << endl;
	}else{
		FOR(i,1,n){
			if(v[i]%v[0] != 0){
				cout << "NO" << endl;
				break;
			}
			else if(i+1 == n) cout << "YES" << endl;	
		}
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
