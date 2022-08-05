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

ll loop(vector<vector<ll>>& grid, ll time, ll cr, ll cc){
    return 0;
}

ll helper(vector<vector<ll>>& grid, ll time, ll cr, ll cc){
    ll ans = LLONG_MAX;

    //either desync, or don't desync !

    ll synced;
    ll desynced;

    if(cr == 1){
        synced = helper(grid, max(time+1, grid[cr][cc]), cr, cc++);
    }else{
        synced = helper(grid, max(time+1, grid[cr][cc]), cr, cc++);
    }

    return ans;
}

void solution(){
    int n; cin >> n; //columns

    ll ans = LLONG_MAX;

    vector<vector<ll>> grid(2);

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < n; j++){
            int t; cin >> t;
            grid[i].push_back(t);
        }
    }

    ans = helper(grid, 0, 0, 0, 0, 0, -1);

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