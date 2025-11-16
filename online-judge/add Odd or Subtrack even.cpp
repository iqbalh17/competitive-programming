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
	int a, b;
	cin >> a >> b;
	if(a == b){
		cout << 0 << endl;
	}else if(a-b < 0){
		int temp = abs(a-b);
		if(temp%2 == 1){
			cout << 1 << endl;
		}else{
			cout << 2 << endl;
		}
	}else{
		int temp = abs(a-b);
		if(temp%2 == 0){
			cout << 1 << endl;
		}else{
			cout << 2 << endl;
		}
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
