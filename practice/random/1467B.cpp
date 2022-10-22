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
    forn(n){cin >> a[i];}

    int ans = 0;
    int mxr = 0;

    vector<int> pov(n);

    for(int i = 2; i < n-1; i++){
        if(a[i] > a[i-1] && a[i] > a[i+1]){
            pov[i] = 1;
            ans++;
        }

        if(a[i] < a[i-1] && a[i] < a[i+1]){
            pov[i] = -1;
            ans++;
        }
    }

    //calculate maximum removals
    for(int i = 0; i < n; i++){
        int t = 0;
        
    }

    cout << (ans - mxr);
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