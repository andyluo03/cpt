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
    int n, k; string a, b; cin >> n >> k >> a >> b;
    vector<int> am(26);
    vector<int> bm(26);
    for(int i = 0; i < n; i++){
        am[a[i]-'a']++;
        bm[b[i]-'a']++;
    }

    int left_over = 0;

    for(int i = 0; i < 26; i++){
        if(bm[i] > am[i] || (am[i] - bm[i]) % k != 0){
            cout << "No";
            return;
        }
        if(i != 25)
            am[i+1] += (am[i]-bm[i]);
    }

    cout << "Yes";
}

int main(){
    set_io
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
        cout << endl;
    }
}