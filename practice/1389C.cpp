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
    string a; cin >> a;
    if(a.size() <= 2) {cout << 0; return;}

    int total = a.size();
    int ans = a.size()-2;
    for(int i = 0; i <= 9; i++){
        for(int j = 0; j <= 9; j++){
            int stage = 0;
            int len = 0;
            for(char f : a){
                if(stage == 0 && f-'0' == i){
                    len++;
                    stage = 2;
                    continue;
                }

                if(stage == 0 && f-'0' == j){
                    len++;
                    stage = 1;
                    continue;
                }

                if(stage == 1 && f-'0' == i){
                    len++;
                    stage = 2;
                    continue;
                }

                if(stage == 2 && f-'0' == j){
                    len++;
                    stage = 1;
                    continue;
                }
            }

            if(len%2 && i != j) len--;
            ans = min(ans, total - len);
        }
    }
    cout << ans;
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