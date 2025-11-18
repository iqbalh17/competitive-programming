#include <bits/stdc++.h>

using namespace std;

#define int long long

vector<int> v(4e5+1,0);

void upd(int x, int tl, int tr, int pos, int val) {
    if (tl==tr) {
        v[x] = val;
    }
    else {
        int m = (tl+tr)/2;
        if (pos<=m) {
            // berarti lokasi update ada di kiri
            upd(2*x+1, tl, m, pos, val);   
        }
        else {
            // lokasi update ada di kanan
            upd(2*x+2, m+1, tr, pos, val);
        }
        v[x] = v[2*x+1] + v[2*x+2];
    }
}

int query(int x, int tl, int tr, int l, int r) {
    if (l<=tl&&tr<=r) return v[x];
    if (l>tr||r<tl) return 0;
    int m = (tl+tr)/2;
    int lf = query(2*x+1, tl, m, l, r);
    int rg = query(2*x+2, m+1, tr, l, r);
    return lf+rg;
}

signed main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        upd(0,0,n-1,i,x);
    }

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a==1) {
            upd(0,0,n-1,b,c);
        }
        else {
            // jumlah dari b sampai c-1
            cout << query(0, 0, n-1, b, c-1) << '\n';
        }
    }

}