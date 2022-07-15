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
    int n, q;
    cin >> n >> q;
    unordered_map<int, int> mp;
    unordered_map<int, int> latest;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(mp.find(tmp) == mp.end())
            mp[tmp] = i;
        latest[tmp] = i;
    }

    vector<vector<int>> queries;
    for(int i = 0; i < q; i++){
        int t1, t2; cin >> t1 >> t2;
        queries.push_back({t1, t2});
    }

    //EARLIEST INDICE !!!

    for(auto query : queries){
        if(mp.find(query[0]) != mp.end() && mp.find(query[1]) != mp.end() && mp[query[0]] < latest[query[1]]){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
}

int main(){
    set_io
    int tc;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        solution();
    }
}