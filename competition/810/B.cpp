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
    int m, n; cin >> n >> m;

    vector<int> a(n+1); forn(n){int t; cin >> t; a[i+1] = t;}

    vector<vector<int>> graph(n+1);

    forn(m){
        int t, u; cin >> t >> u;
        graph[t].push_back(u);
        graph[u].push_back(t);
    }

    if(m%2 == 0){cout << 0; return;}

    int ans = INT_MAX;

    //REMOVE ONE NODE

    for(int i = 1; i <= n; i++){
        if(graph[i].size()%2){
            ans = min(ans, a[i]);
        }
    }

    //REMOVE TWO NODES

    for(int i = 1; i <= n; i++){
        if(graph[i].size()%2 == 0){
            for(int j = 0; j < graph[i].size(); j++){
                if(graph[graph[i][j]].size()%2 == 0)
                    ans = min(ans, a[i] + a[graph[i][j]]);
            }
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