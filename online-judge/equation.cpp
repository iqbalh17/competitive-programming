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
	double c; cin >> c;
	double l = 0;
	double r = 1e6;
	FOR(i,0,100){
		double x = (l+r)/2;
		double res = x*x+sqrt(x);
		if(res > c){
			r = x;
		}else{
			l = x;
		}
	}
	cout << fixed << setprecision(10) << r << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
