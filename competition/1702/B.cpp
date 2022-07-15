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
    string s; cin >> s;
    //SIMPLE SIMULATION PROBLEM!
    int ans = 1;
    unordered_set<char> mp;

    for(int i = 0; i < s.size(); i++){
        if(mp.find(s[i]) == mp.end()){
            if(mp.size() == 3){
                ans++;
                mp.clear();
            }
            mp.insert(s[i]);
        }
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