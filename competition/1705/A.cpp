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
    int n, x; cin >> n >> x; vector<int> h;
    for(int i = 0; i < (2*n); i++){int tmp; cin >> tmp; h.push_back(tmp);}

    sort(h.begin(), h.end());
    for(int i = 0; i < n; i++)
        h[i]+=x;

    for(int i = 0; i < n; i++){
        if(h[i+n] < h[i]){
            cout << "NO";
            return;
        }
    }

    cout << "YES";
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