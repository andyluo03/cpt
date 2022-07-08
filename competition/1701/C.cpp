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
    int n, m;
    cin >> n >> m;
    unordered_map<int, int> mp;
    int sum = 0;
    for(int i = 0; i < m; i++){
        int tmp; cin >> tmp;
        mp[tmp]++;
        sum += tmp;
    }

    int free = 0;
    int hours = 0;

    while(true){
        int left
        for(auto a : mp){
            
        }
    }

    cout << hours;
}

int main(){
    set_io
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        solution();
        cout << endl;
    }
}