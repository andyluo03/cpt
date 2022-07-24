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
    int n, m; cin >> n >> m;
    unordered_map<ll, ll> mp;

    vector<vector<ll>> days;

    ll of = 0;

    forn(n){
        ll c, p; cin >> c >> p;
        days.push_back({c, p});

        mp[c] += p; 

        if(mp[c] > m){
            of++;
            mp[c] = -mp[c];
        }

        for(int f = p-1; f > 0; f--){
            mp[c - (p - f)] += f * mp[c - (p - f)] < 0 ? -1 : 1;
            mp[c + (p - f)] += f * mp[c - (p - f)] < 0 ? -1 : 1;

            if(mp[c - (p - f)] > m){
                of++;
                mp[c - (p - f)] = -mp[c - (p - f)];
            }

            if(mp[c + (p - f)]  > m){
                of++;
                mp[c + (p - f)]  = -mp[c + (p - f)] ;
            }
        }
    }

    //TRACK OVERFLOWS + IF A REMOVAL WOULD WORK?


    forn(days.size()){
        int c = days[i][0];
        int p = days[i][0];

        if(mp[c] + p < 0){cout << 0; continue;}

        int t = 0;

        for(int f = p-1; f > 0; f--){
            if(mp[c - (p - f)] + f < 0){cout << 0; break;}
            if(mp[c + (p - f)] + f < 0){cout << 0; break;}
        }

        if(t == of) cout << 1;
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