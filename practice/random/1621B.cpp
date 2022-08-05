#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
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
    int n; cin >> n;

    int cost = INT_MAX;
    int gmin = INT_MAX;
    int gmax = INT_MIN;
    int mnc, mxc;

    for(int i = 0; i < n; i++){
        int l, r, c; cin >> l >> r >> c;

        gmin = min(gmin, l);
        gmax = max(gmin, r);

        if(l == gmin && r == gmax){
            cost = min(c, cost);
        }



        cost = min(cost, min(gmin, gmax));
        cout << cost << endl;
    }
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
        cout << endl;
    }
}