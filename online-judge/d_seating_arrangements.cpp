#include <bits/stdc++.h>

using namespace std;

#define int long long
#define pii pair<int, int>
#define vin vector<int>
#define vst vector<string>
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
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
    int n, m; 
    cin >> n >> m;

    vin v(m);

    for(auto &i : v) cin >> i;
	cout << "halo";
    int count = 0;

    for (int i = 1; i < m; i++) {
        for (int j = 0; j < m - i; j++) {
            if (v[j] < v[j+1]) {
                swap(v[j], v[j+1]);
                count++;
            }
        }
    }

    cout << count << endl;  
}

signed main() { fastIO
    int t = 1;
    cin >> t;
    FOR(it, 0, t) {
        solve();
    }
}