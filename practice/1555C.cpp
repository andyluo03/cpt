#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
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
    int m; cin >> m;
    vector<vector<int>> mx(2);
    for(int i = 0; i < 2; i++)
        for(int j = 0; j < m; j++){
            int tmp; cin >> tmp;
            mx[i].push_back(tmp);
        }

    int ans = INT_MAX;
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 0; i < m; i++)
        sum1 += mx[0][i];

    for(int i = 0; i < m; i++){
        sum1 -= mx[0][i];
        ans = min(ans, max(sum1, sum2));
        sum2 += mx[1][i];
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