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
    int n, x; cin >> n >> x;
    vector<int> a(n);
    forn(n){cin >> a[i];}

    int lmin = a[0];
    int lmax = a[0];
    int ans = 0;

    forn(n){
        lmin = min(a[i], lmin);
        lmax = max(a[i], lmax);

        //cout << lmin << " " << lmax << ", ";
        if(abs(lmax - lmin) > x*2){
            lmin = a[i];
            lmax = a[i];
            ans++;
        }
    }

    cout << ans;
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