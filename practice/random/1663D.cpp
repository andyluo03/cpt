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

vector<int> mv;

void pc(){
    mv[0] = 0;
    for(int i = 1; i < mv.size(); i++){
        for(int x = 1; x <= i; i++){
            int j = i + i/x;
            if(j < mv.size()) mv[j] = min(mv[j], mv[i]+1);
        }
    }
}

void solution(){
	int n, k; cin >> n >> k;
	vector<int> cost;
	vector<int> coin;
	forn(n){
		int t; cin >> t;
        int f = log2(t);
	}

    int ans = 0;
}

int main(){
    set_io
    pc();
    int tc = 1;
    //cin >> tc;
    for(int i = 1; i <= tc; i++){
        // cout << "Case #" << t << ": ";
        solution();
        cout << endl;
    }
}