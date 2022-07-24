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
    int n, m, k; cin >> n >> m >> k;
    vector<ll> r;
    vector<ll> c;

    forn(k){
        int t; cin >> t;
        if(t >= 2*n)
            r.push_back(t/n); //how many rows of size n we can form

        if(t >= 2*m)
            c.push_back(t/m); //how many columns of size m we can form
    }

    if(r.size() == 0 && c.size() == 0){cout << "No"; return;}

    ll total = 0;
    ll g = 0;

    for(int i = 0; i < r.size(); i++){
        if(r[i] >= m){cout << "Yes"; return;}

        total += r[i];
        g = max(g, r[i]);
    }

    if(total >= m){
        if(total%2 == m%2){cout << "Yes";return;}
        if(total - 1 >= m && g > 2){cout << "Yes";return;}
    }

    total = 0; g = 0;

    for(int i = 0; i < c.size(); i++){
        if(c[i] >= n){cout << "Yes"; return;}

        total += c[i];
        g = max(g, c[i]);
    }

    if(total >= n){
        if(total%2 == n%2){cout << "Yes";return;}
        if(total - 1 >= n && g > 2){cout << "Yes";return;}
    }

    cout << "No";
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