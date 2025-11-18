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
	int n, a, b;
	cin >> n >> a >> b;
	if(abs(a-b) < (n / 2) && b > a){
		cout << -1 << endl;
	} 
	else if(b < n/2) {
		cout << -1 << endl;
	}
	else{	
	int arr[n+1];
	arr[0] = a;
	arr[n/2] = b;
	int x = 1;
	int y = (n/2) + 1;
	for(int i = n; i >= 1; i--){
		if(i == a || i == b) continue;
		if(i >= a && x < n/2){	
			arr[x] = i;
			x++;
		}else{
			arr[y] = i;
			y++;
		}
	}
	FOR(i,0,n){
		cout << arr[i] << " ";
	}
	cout << endl;
	}
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
