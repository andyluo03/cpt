#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(n) for(int i = 0; i < n; i++)
#define endl "\n"

typedef long long ll;
using namespace std;
template<class T> 
int amin(T a, T b){if(a < b) return a; return b;}
template<class T>
int amax(T a, T b){if(a > b) return a;return b;}
template<class T>
void d_vector(vector<T> v){for(auto a : v) cout << a << " ";}

const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

void solution(){
    int n, m; cin >> n >> m;
    vector<int> a(n); 
    forn(n){cin >> a[i];}

    vector<ll> f(n);
    vector<ll> b(n);

    f[0] = 0;
    for(int i = 1; i < n; i++)
        f[i] = f[i-1] + max(0, a[i-1] - a[i]);

    b[n-1] = 0;
    for(int i = n-2; i >= 0; i--)
        b[i] = b[i+1] + max(0, a[i+1] - a[i]);


    forn(m){
        ll s, e; cin >> s >> e;
        s--; e--;
        if(s > e){
            cout << (b[e] - b[s]);
        }else{
            cout << (f[e] - f[s]);
        }
        cout << " ";
    }
}

int main(){
    set_io
    int tc = 1;
    //cin >> tc;
    for(int i = 1; i <= tc; i++){
        // cout << "Case #" << t << ": ";
        solution();
        cout << endl;
    }
}