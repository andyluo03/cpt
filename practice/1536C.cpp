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
    int n; string s; cin >> n >> s;

    vector<int> d(n);
    vector<int> k(n);

    unordered_map<double, int> mp;

    forn(s.size()){
        if(s[i] == 'D')
            d[i]++;
        else
            k[i]++;

        if(i != 0){
            d[i] += d[i-1];
            k[i] += k[i-1];
        }

        int ans = 0;

        double ratio;

        if(d[i] != 0 && k[i] != 0)
            ratio = (double) d[i] / (double) k[i];
        else
            ratio = 0.0;

        mp[ratio]++;
        ans = mp[ratio];

        cout << ans << " ";
    }
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