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

vector<vector<int>> adj;
vector<bool> visited;

int go(int i){
    visited[i] = true;
    for(int n : adj[i]){
        if(!visited[n])
            return go(n)+1;
    }
    return 1;
}

void solution(){
    //DURING COMPETITION I REALIZED THAT I JUST NEEDED TO FIGURE OUT IF IT WAS A BIPARTITE GRAPH, I WAS JUST TOO WEAK
    int n; cin >> n;
    adj = vector<vector<int>>(n+1);
    visited = vector<bool>(n+1, false);
    bool flag = false;
    for(int i = 0; i < n; i++){
        int t1, t2; cin >> t1 >> t2;
        adj[t1].push_back(t2);
        adj[t2].push_back(t1);
        if(t1 == t2 || adj[t1].size() > 2 || adj[t2].size() > 2) flag = true;
    }
    
    if(flag){
        cout << "NO";
        return;
    }

    for(int i = 0; i < n; i++){
        if(!visited[i+1]){
            if(go(i+1)%2){
                cout << "NO";
                return;
            }
        }
    }

    cout << "YES";
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