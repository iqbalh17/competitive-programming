#include <bits/stdc++.h>

using namespace std;
#define int long long
#define ld long double
#define pii pair<int, int>
#define vin vector<int>
#define vst vector<string>
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define fi first
#define se second
#define len length
#define mp make_pair
#define all(v) v.begin(), v.end()
#define FOR(i,l,r,p) for(int i = l; i < r; i+=p)
#define FORR(i,r,l,m) for(int i = r; i >= l; i-=m)
#define fastIO ios_base::sync_with_stdio(false); cin.tie(0);

void solve(int tc) {
    int n;
    cin >> n;
    vin v;
    v.resize(n);
    for(auto &i : v) {
        cin >> i;
    }
    sort(all(v));
    cout << endl;
    int k;
    cin >> k;
    while(k--) {
        int l, r;
        cin >> l >> r;
        cout << upper_bound(all(v), r) - lower_bound(all(v), l) << " ";
        // cout << bound1(low, high) << " " << bound2(low, high) << endl;
    }
}

signed main() { fastIO

    int t = 1;
    //cin >> t;

    FOR(tc, 1, t+1, 1) {
        solve(tc);
    }

}
