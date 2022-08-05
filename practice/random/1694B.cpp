#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
typedef long long ll;

using namespace std;

template<typedef T> 
int amin(T a, T b){
    if(a < b) return a;
    return b;
}

template<typedef T>
int amax(T a, T b){
    if(a > b) return a;
    return b;
}

void solution(){
    int n; cin >> n;
    string s; cin >> s;

    unordered_map<string, int> mem;

    //SLIDING WINDOW -> O(2N + N)

    int ret = 0;

    for(int ws = 0; ws < n; i++){
        for(int i = 0; i < n - ws; i++){
            
        }
    }

    cout << ret << endl;
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