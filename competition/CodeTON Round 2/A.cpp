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
    string a, b; cin >> a >> b;
    if(m > n){cout << "NO"; return;}

    //only care about last m characters of a
    char first = a[0];
    forn(n-m+1){
        if(b[0] == '0')
            first = min(first, a[i]);
        else
            first = max(first, a[i]);
    }
    string t = " ";
    t[0] = first;

    for(int i = 1; i < m; i++){
        t = t+a[i + n-m];
    }

    if(t == b){
        cout << "YES";
    }else{
        cout << "NO";
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