#include <bits/stdc++.h>

using namespace std;

// DATA TYPE
#define int     long long
#define ull     unsigned long long
#define ld      long double
#define str     string

#define endl    '\n'

// VECTOR & MAP
#define fi      first
#define se      second
#define len     length
#define pb      push_back
#define ppb     pop_back
#define pf      push_front
#define ppf     pop_front
#define lb      lower_bound
#define ub      upper_bound
#define all(v)  v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()

// FUNC
#define sz(x)      (int) x.size()
#define ppc(x)     __builtin_popcount(x)
#define ppcl(x)    __builtin_popcountll(x)

// CONSTANT
#define mod     1000000007 // 1e9+7
#define eps     0.000000001 // 1e-9
#define inf     2147483647 // INT_MAX
#define INF     9223372036854775807 // LLONG_MAX
// const vector<int> dx = {1,-1,0,0,1,-1,-1,1};
// const vector<int> dy = {0,0,-1,1,-1,-1,1,1};

// DEBUGGING
#define sleepfor(t)     this_thread::sleep_for(std::chrono::seconds(t))
#define trace(x)        cout<<">> "<<#x<<" : "<<x<<endl
#define trace2(x,y)     cout<<">> "<<#x<<" : "<<x<<", "<<#y<<" : "<<y<<endl
#define trace3(x,y,z)   cout<<">> "<<#x<<" : "<<x<<", "<<#y<<" : "<<y<<", "<<#z<<" : "<<z<<endl
#define trace4(a,b,c,d) cout<<">> "<<#a<<" : "<<a<<", "<<#b<<" : "<<b<<", "<<#c<<" : "<<c<<", "<<#d<<" : "<<d<<endl

// PYTHON
template<typename T> void print(T var, string end = " ") {cout << var << end;}
template<typename T> void print(vector<T> var) {for(auto i : var) {print(i);} cout << endl;}
template<typename T> void print(vector<vector<T>> var) {for(auto &i : var) {print(i);} cout << endl;}
template<typename T, typename U> void print(pair<T, U> var, string end = "\n") {cout << var.first << ' ' << var.second << end;}
template<typename T, typename U> void print(vector<pair<T, U>> var) {for(auto &i : var) {print(i);}}
template<typename T, typename U> void print(map<T, U> var) {for(auto &i : var) {print(i);}}

// MAIN CODE
int N = 200003;
int pref[200003][32];

void Main(int tc) {
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	for(int i = 0; i < n; i++){
		int x = v[i];
		for(int j = 0; j < 32; j++){
			if(x%2){
				pref[i+1][j] = pref[i][j]+1;
				x /= 2;
			}else{
				pref[i+1][j] = pref[i][j];
				x/=2;
			}
		}
	}
	int q; cin >> q;
	while(q--){
		int l, k; cin >> l >> k;
		int le = l, ri = n, ans = l;
		if(v[l-1] < k){
			cout << -1 << " ";
			continue;
		}
		while(le <= ri){
			int m = (le+ri)/2;
			int cek = 0;
			for(int j=0; j< 32; j++){
                		if(pref[m][j]-pref[l-1][j] == m-l+1){
                    			cek+=pow(2,j);
                		}
            		}
            		if(cek >= k){
            			le = m+1;
				ans = max(ans, m);	
			}
			else ri = m-1;
		}
		cout << ans << " ";		
	}
	cout << endl;	
}

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int t = 1;
        cin >> t;
        for(int tc = 1; tc <= t; tc++) {
                Main(tc);
        }
}
