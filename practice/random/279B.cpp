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
    int n, t; vector<int> a; cin >> n >> t;
    for(int i = 0; i < n; i++){int t; cin >> t; a.push_back(t);}

    int l = 0;
    int csum = 0;
    int ans = 0;

    for(int i = 0; i < n; i++){
        if(a[i] > t){
            l = i+1;
            csum = 0;
            continue;
        }

        csum += a[i];

        while(csum > t){
            csum -= a[l];
            l++;
        }

        ans = max(ans, (i-l+1));
    }

    cout << ans;
}

int main(){
    set_io
    int tc = 1;
    //cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
        cout << endl;
    }
}