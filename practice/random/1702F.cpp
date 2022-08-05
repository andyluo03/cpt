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
    vector<int> a(n);
    vector<int> b(n);

    forn(n){cin >> a[i];}
    forn(n){cin >> b[i];}

    //reduce all a's to odd
    unordered_map<int, int> mp;
    forn(n){
        while(a[i]%2 == 0 && a[i] != 1) a[i] = a[i]/2;
    }

    forn(n){
        mp[a[i]]++;
    }

    bool good = true;
    while(good){
        good = false;
        forn(n){
            if(b[i] == 0){continue;}

            good = true;

            if(mp[b[i]] != 0){
                mp[b[i]]--;
                b[i] = 0;
            }

            b[i] = b[i]/2;


        }
    }

    for(auto a : mp){
        if(a.second != 0){cout << "NO"; return;}
    }

    cout << "YES";
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