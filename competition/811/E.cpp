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

    int mn = INT_MAX;

    bool five = false; bool other = false;
    forn(n){cin >> a[i]; mn = min(mn, a[i]); five = !a[i]%5; other = a[i]%5;}

    if(five && other){cout << "NO"; return;}
    if(five && !other){

    }

    int track = a[0]%20;

    forn(n){
        if(a[i]%20 != track)
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