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

    int best = 2;

    unordered_set<int> mp;
    for(int i = 1; i <= n; i++)
        mp.insert(i);

    vector<int> ret;
    
    for(int i = 1; i <= n; i++){
        if(mp.find(i) == mp.end()) continue;

        ret.push_back(i);
        mp.erase(i);
        for(int a = i * best; a <= n; a*=best){
            ret.push_back(a);
            mp.erase(a);
        }
    }

    cout << best << endl;
    for(int i = 0; i < ret.size(); i++){
        cout << ret[i] << " ";
    }
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