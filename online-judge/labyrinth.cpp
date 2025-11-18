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

int vis[1000005]={0};
vin adj[1000005];
queue<int> q;
int par[1000005];
bool bfs(int s){
    vis[s]=1;
    q.push(s);
    while(!q.empty()){
        int s = q.front(); q.pop(); 
        for( auto i: adj[s]){
            if (vis[i]) continue;
            vis[i]=vis[s]+1;
            par[i]=s;
            q.push(i);
        }
    }
    return 0;
}
void solve(){
    int n,m; cin >> n >> m;
    char grid[n][m];
    int st=0, end=0;
    FOR(i,0,n){
        FOR(j,0,m){
            int z = i*m+j;
            cin >> grid[i][j];
            if (grid[i][j]=='#') continue;
            if (grid[i][j]=='A') st=z;
            if (grid[i][j]=='B') end=z;
            if (i>=1 && grid[i-1][j]!='#') adj[z].pb(z-m), adj[z-m].pb(z);
            if (j>=1 && grid[i][j-1]!='#') adj[z].pb(z-1), adj[z-1].pb(z);
        }
    }
    bfs(st);
    if (!vis[end]){
		cout << "NO";
		return;
	}
    vin v; int i = end;
    while (i!=st){
        v.pb(i);i=par[i];
    }
    cout << "YES" << endl;
    cout << v.sz() << endl;
    int x = st/m, y = st%m;
    string ans="";
    FORR(i,-1,v.sz()){
        int x1 = v[i]/m, y1 = v[i]%m;
        if (x==x1) ans+=(y>y1?'L':'R');
        else ans+=(x>x1?'U':'D'); 
        x = x1, y = y1;
    }
    cout << ans;
}

signed main() { fastIO
	int t = 1; // cin >> t;
	FOR(it, 0, t) {
		solve();
	}
}
