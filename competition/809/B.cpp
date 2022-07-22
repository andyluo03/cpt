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

int helper(int c, vector<int>& dp, vector<vector<int>>& pos, int z){
    if(c == dp.size()-1) return 1;
    if(dp[c] != -1) return dp[c];

    int t = 0;
    for(int i = c+1; i < pos[z].size(); i++){
        if((pos[z][c] - pos[z][i]) % 2)
            t = max(helper(i, dp, pos, z), t);
    }

    dp[c] = 1 + t;
    return dp[c];
}

void solution(){
   int n; cin >> n;

   
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