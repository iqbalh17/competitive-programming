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
//	FOR(i,1,sqrt(n)+1){
//		if(n%i == 0) cek = 0;
//	}
	if(n%2 == 0) cout << n/2 << " " << n/2 << endl;
	else{
		int temp;
		int cnt = 0;
		FOR(i,1,sqrt(n)+1){
			if(n%i == 0){
				temp = i;
				if(cnt == 2) break;
				cnt++;
			}
		}
		temp = n / temp;
		if(temp == n) cout << 1  << " " << temp-1 << endl;
		else cout << temp << " " << n-temp << endl;
	}
	
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
