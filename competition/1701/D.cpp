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

void backtrack(vector<vector<int>> poss, vector<int> cur, vector<bool> used, vector<int>& ans){
    cout << "TEST";
    if(cur.size() == poss.size()){
        ans == cur;
        return;
    }

    for(int i = 0; i < poss[cur.size()].size(); i++){
        if(used[poss[cur.size()][i]])
            continue;
        vector<bool> tmp = used;
        vector<int> tmp1 = cur;
        tmp1.push_back(poss[cur.size()][i]);
        tmp[poss[cur.size()][i]] = true;
        backtrack(poss, tmp1, tmp, ans);
    }
}

void solution(){
    //possible
    int n; cin >> n;
    vector<int> b;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        b.push_back(tmp);
    }
    cout << "HI";
    vector<vector<int>> poss;

    for(int i = 0; i < b.size(); i++){
        cout << "HI";
        int cur = b[i];

        for(int j = cur * (i+1); j/(i+1) == cur ; j++){
            poss[i].push_back(j);
        }
    }

    vector<int> ans;
    backtrack(poss, vector<int>(), vector<bool>(n, false), ans);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
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