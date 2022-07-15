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
    string w; int p; cin >> w >> p;
    int val = 0;
    vector<int> count(26, 0);
    for(char c : w){
        count[c-'a']++;
        val += (c - 'a') + 1;
    }

    int cur = 25;

    while(val > p){
        if(count[cur] == 0 && cur == 0) break;
        if(count[cur] == 0){
            cur--;
            continue;
        }
        count[cur]--;
        val -= (cur+1);
    }

    string ans = "";
    for(char c : w){
        if(count[c-'a'] > 0){
            ans+=c;
            count[c-'a']--;
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