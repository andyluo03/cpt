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
    int n; vector<int> a; cin >> n; for(int i = 0; i < n; i++){int x; cin>>x; a.push_back(x);}
    ll ans = 0;
    
    a[a.size()-1] = 5;

    int lz = 0;

    for(int i = 0; i < n-1; i++){
        while(a[i] > 0){
            lz = max(lz, i+1);
            while(a[lz] != 0 && lz < a.size()){
                lz++;
            }

            if(lz >= a.size()) break; 

            if(a[lz] == 0) a[lz]++;
            a[i]--;
            ans++;
        }
        if(lz >= a.size()) break; 
    }

    for(int i = 0; i < n-1; i++)
        ans += a[i];

    cout << ans;
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