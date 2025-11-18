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

vector<int> v;
vector<char> lid;
int dp[200003][2];
int n,  g = 1;

int f(int x, char a, char b, int tukar){
	if(dp[x][tukar] != -1) {
		return dp[x][tukar];	
	}
	if(x == n) return 0;
	int temp1 = 0, temp2 = 0;

	if(a == '1') temp1 += v[x] + f(x+1, b, lid[x+2], 0);
	if(a == '0' && x+1 != n){
		int d = 0, h=0;
		if(b == '1'){
			d += v[x] + f(x+1, a, lid[x+2], 1);
		}
		h += f(x+1, b, lid[x+2], 0);
		temp2 = max(d, h);
	} 
	
	return dp[x][tukar] = max(temp1, temp2);
}

void solve() {
	cin >> n;
	v.resize(n);
	lid.resize(n);
	for(auto &i: lid) cin >> i;
	for(auto &i: v) cin >> i;
	memset(dp, -1, sizeof(dp));

	cout << f(0, lid[0], lid[1], 0) << endl;
}

signed main() { fastIO
	int t = 1; cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
