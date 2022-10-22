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
    //two pointers
    int n; cin >> n;
    long long ans = 0;
    forn(n){
        long long t; cin >> t;
        ans += t;
    }

    vector<long long> deaths(n);

    long long m = 0;

    forn(n){
        cin >> deaths[i];
        m = max(deaths[i], m);
        ans += deaths[i];
    }

    ans -= m;

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