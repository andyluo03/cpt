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
    ll n, m; cin >> n >> m;
    vector<ll> a(m);
    forn(m){cin >> a[i];}

    sort(a.begin(), a.end());

    vector<ll> segments;

    for(int i = 1; i < m; i++){
        segments.push_back(a[i] - a[i-1] - 1);
    }

    segments.push_back(a[0] + (n - a[a.size()-1]) - 1);

    sort(segments.begin(), segments.end());

    ll i_ans = 0;
    ll i = 0;
    ll ci = segments.size()-1;

    while(ci >= 0){
        if(segments[ci] > i){
            if(segments[ci] - i <= 2){
                i+=2;
                i_ans++;
                continue;
            }

            i_ans += (segments[ci] - i - 1);
            i+=4;
        }else{
            break;
        }
        ci--;
    }

    cout << (n - i_ans);
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