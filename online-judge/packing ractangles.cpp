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

int w, h, n;
bool fill(int x){
	return (x/w) * (x/h) >= n;
}

void solve() {
	cin >> w >> h >> n;
	int left = 0;
	int right = 1;
	while(!fill(right)){
		right *= 2;
	}
	int mid = 0;
	while(right - left > 1){
		mid = (left + right) / 2;
		if(fill(mid)){
			right = mid;
		}else{
			left = mid;
		}
	}
	if(fill(right)){
		cout << right << endl;
	}else{
		cout << left << endl;
	}
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
