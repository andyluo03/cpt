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
    int n; cin >> n; int c = 0; vector<int> a;
    forn(n){int tmp; cin >> tmp; a.push_back(tmp); if(tmp == i+1) c++;}
    if(c == n){cout << "0"; return;}
    if(c == 0){cout << "1"; return;}

    //if outside borders are correct -> 1 else -> 2
    int stage = 0;
    forn(n){
        if(stage == 0 && i+1 != a[i]){stage++; continue;}
        if(stage == 1 && i+1 == a[i]){stage++; continue;}
        if(stage == 2 && i+1 != a[i]){cout << "2"; return;}
    }

    cout << "1";
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