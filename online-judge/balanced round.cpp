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
	int n, m; cin >> n >> m;
	int cnt = 0;
	vin v(n);
//	cout << m << endl;
	FOR(i,0,n) cin >> v[i];	
	if(n == 1){
		cout<< 0 << endl;
	}else{		
//		sort(all(v));
//		FOR(i,0,n-1){
//			if(v[i+1]-v[i] > m) cnt += (i+1) - cnt;
//		}
//		
//		sort(all(v), greater<int>());
//		FOR(i,0,n-1){
//			if(v[i]-v[i+1] > m) dnt += (i+1) - dnt;
//		}
//		
//		cout << min(cnt, dnt) << endl;

		int big = 0;
		sort(all(v));
		FOR(i,0,n-1){
			if(v[i+1]-v[i] <= m){
				cnt++;
				if(cnt > big) big = cnt;
			}else{
				cnt = 0;
			}
		}
		big++;
		cout << n - big << endl;
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
