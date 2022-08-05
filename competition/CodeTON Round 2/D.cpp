#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(n) for(ll i = 0; i < n; i++)
#define endl "\n"

typedef long long ll;
using namespace std;
template<class T> 
int amin(T a, T b){if(a < b) return a; return b;}
template<class T>
int amax(T a, T b){if(a > b) return a;return b;}
template<class T>
void d_vector(vector<T> v){for(auto a : v) cout << a << " ";}

const ll MOD = 998244353;

ll helper(ll i, vector<vector<ll>>& g, vector<ll>& val, vector<ll>& a){
    if(val[i] != 0) return val[i];

    ll ans = 0;

    for(int j = 0; j < g[i].size(); j++){
        ans += helper(g[i][j], g, val, a);
    }

    val[i] = ans + a[i];
    return ans;
}

void solution(){
    ll n, m; cin >> n >> m;
    vector<ll> a(n);
    forn(n){cin >> a[i];}
    vector<vector<ll>> g(n);
    forn(m){
        ll j, k; cin >> j >> k;
        g[j].push_back(k);
    }

    ll ans = 0;

    vector<ll> val(n, 0);

    //ans = max(ans, ?);
    forn(n){
        if(val[i] != 0) continue;

        val[i] == helper(i, g, val, a);

        ans = max(val[i], ans);
    }

    cout << ans%MOD;
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        // cout << "Case #" << t << ": ";
        solution();
        cout << endl;
    }
}