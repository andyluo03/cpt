#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"

const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

typedef long long ll;

using namespace std;

template<class T> 
int amin(T a, T b){
    if(a < b) return a;
    return b;
}

template<class T>
int amax(T a, T b){
    if(a > b) return a;
    return b;
}

void solution(){
    //you can move forwards either 1 or k per each move
    int n, k, p; string ar; int x, y;
    cin >> n >> p >> k >> ar >> x >> y;
    p--;
    
    vector<int> missing(n, -1);
    for(int i = missing.size()-1; i >= 0; i--){
        if(missing[i] != -1) continue;
        missing[i] = ar[i] == '0' ? 1:0;
        for(int j = i-k; j >= 0; j-=k)
            missing[j] = missing[j+k] + (ar[j] == '0' ? 1:0);
    }


    int ans = INT_MAX;
    for(int i = p; i < n; i++){
        ans = min(ans, missing[i] * x + (i-p) * y);
    }
    cout << ans;
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