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
    int n; cin >> n;
    vector<int> cur;

    cout << n;
    cout << endl;

    forn(n){cur.push_back(i+1); cout << cur[i] << " ";}
    cout << endl;

    for(int i = 0; i < n-1; i++){
        int t = cur[i];
        cur[i] = cur[i+1];
        cur[i+1] = t;

        for(int j = 0; j < cur.size(); j++){
            cout << cur[j] << " ";
        }
        cout << endl;
    }
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        // cout << "Case #" << t << ": ";
        solution();
    }
}