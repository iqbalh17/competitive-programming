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
#define double long double

vector<int> ropes;

int potong(double length, int n){
	int piece = 0;
	FOR(i,0,n){
		piece += floor((ropes[i]/length));
	}
	return piece;
}

void solve() {
	int n, k; cin >> n >> k;
	ropes.resize(n);
	for(auto &i: ropes){
		cin >> i;
	}
	double ans;
	double left = 0;
	double right = 1e9;
	double mid;
	int batas = 100;
	for(int i = 1; i <= batas; i++){
		mid = (left + right) / 2.00;
		int piece = potong(mid, n);
		if(piece >= k){
			ans = mid;
			left = mid;
		}else{
			right = mid;
		}
	}
	cout << fixed << setprecision(20) << ans << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
