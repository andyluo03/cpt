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

int closest(int a, vector<int> b){
	int best = INT_MAX; int pos = -1;

	for(int i = 0; i < n; i++){
		if(best < abs(a - b[i])){
			best = abs(a-b[i]);
			pos = i;
		}
	}
	return pos;
}

void solution(){
    //all nodes already have indegree 2 except the corners
    int n; cin >> n;
    vector<int> top, bottom;
    forn(n){int tmp; cin >> tmp; top.push_back(tmp);}
    forn(n){int tmp; cin >> tmp; bottom.push_back(tmp);}

   	ll ans = LLONG_MAX;

   	//top[0] chooses either corner or its best (excluding corners).
   	//top[n-1] chooses either corner or its best (excluding corners).

   	vector<int> a = {0, closest(top[0], bottom), n-1};
   	vector<int> b = {0, closest(top[n-1], bottom), n-1};

   	for(int i : a){
   		for(int j : b){
   			ll tmp = abs(top[0] - b[i]) + abs(a[n-1] - b[j]);

   			if(i > 0 && j > 0)
   				tmp += abs(bottom[0] - top[closest(bottom[0], top)]);

   			if(i < n-1 && j < n-1)
   				tmp += abs(bottom[n-1] - top[closest(bottom[n-1], top)]);

   			ans = min(tmp, ans);
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