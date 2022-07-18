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
    int n, q; cin >> n >> q; vector<int> a;
    for(int i = 0; i < n; i++){int tmp; cin >> tmp; a.push_back(tmp);}

    if(q >= n){
        for(int i = 0; i < n; i++)
            cout << 1;
        return;
    }

    vector<int> ans(n);

    int iq = 0;
    vector<int> dp(n);

    dp[a.size()-1] = 1;
    for(int i = a.size()-1; i >= 0; i--){
        if(i != a.size()-1 && a[i] > dp[i+1])
            dp[i] = dp[i+1]+1;
        else if(i != a.size()-1)
            dp[i] = dp[i+1];

        if(a[i] <= q || dp[i] <= q){
            ans[i] = 1;
        }else{
            ans[i] = 0;
        }
    }

    for(int c : ans)
        cout << c;
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