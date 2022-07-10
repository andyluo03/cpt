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
    int n; cin >> n;

    int ret = INT_MAX;
    for(int i = 0; i <= 15; i++){
        for(int j = 0; j <= 15; j++){
            if(((n+i)*(1 << j))%32768 == 0){
                ret = min(ret, i+j);
            }
        }
    }

    cout << ret;
}

int main(){
    set_io
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
        cout << " ";
    }
}