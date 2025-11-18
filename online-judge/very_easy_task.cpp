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

int n,x,y;

int banyak(int dtk){
	dtk -= min(x,y);
	int px, py;
//	if(dtk < 0){
//		px = floor((dtk-1)/x);
//		py = floor((dtk-1)/y);
//	}else{
		px = floor(dtk/x);
		py = floor(dtk/y);
//	}
	return px + py + 1;
}

void solve() {
	cin >> n >> x >> y;
	if(n == 1){
		cout << min(x,y) << endl;
	}else{
		int right = 1;
	int left = 0;
	while(banyak(right) < n){
		right *= 6;
	}
	int mid;
	while(right - left > 1){
		mid = (left + right) / 2;
		if(banyak(mid) >= n){
			right = mid;
		}else{
			left = mid;
		}
	}
	cout << right << endl;
	}
	
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
