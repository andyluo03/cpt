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
    int n, c, q; cin >> n >> c >> q;
    string s; cin >> s;

    string a = s;
    
    for(int i = 0; i < c; i++){
        int l, h; cin >> l >> h;
        s = s + string(s.begin()+(l-1), s.begin()+(h));
    }

    for(int i = 0; i < q; i++){
        int t; cin >> t;
        cout << s[t-1] << endl;
    }
    
    //probably it's sort the queries + sort the pastes -> then go into something like that
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
    }
}