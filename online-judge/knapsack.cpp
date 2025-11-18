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

int N, W;
int w[105], v[105];
int dp[105][100005];

int value(int n, int b, int nilai){
	if(dp[n][b] != -1) return dp[n][b];
	int result;
	if(n==0 || b == 0){	
		return nilai;
	}
	if(w[n] > b) result = value(n-1, b, nilai);
	else{
		int tmp1 = value(n-1, b, nilai);
		int tmp2 = value(n-1, b - w[n], nilai+v[n]);
		result = max(tmp1, tmp2);
	}	
	return dp[n][b] = result;
}

void solve() {
	cin >> N >> W;
	FOR(i,1,N+1){
		cin >> w[i] >> v[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << value(N, W, 0) << endl;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
