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
    int n, l, r; cin >> n >> l >> r;
    //greatest common denominator for first number is always first number -> 
    if(n == 1){cout << "YES" << endl << l; return;}

    vector<int> ans(n);

    for(int i = 1; i < n+1; i++){
        int t = -1;

        for(int j = (l/i)*i; j <= r; j += i){
            if(j < l) continue;
            if(j%i == 0){
                t = j;
                break;
            }
        }
        if(t == -1){
            cout << "NO";
            return;
        }
        ans[i-1] = t;
    }


    cout << "YES" << endl;
    for(int c : ans){cout << c << " ";}
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
        cout << endl;
    }
}