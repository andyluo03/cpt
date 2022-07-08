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
    int n; 
    cin >> n;
    vector<int> parents(n);
    vector<int> ind(n);
    for(int i = 1; i < n; i++){
        int tmp; cin >> tmp;
        parents[i] = tmp-1;
        ind[tmp-1]++;
    }
    string bw; cin >> bw;

    queue<int> q;
    for(int i = 0; i < ind.size(); i++)
        if(ind[i] == 0) q.push(i);

    int ret = 0;
    unordered_map<int, int> mp;

    while(!q.empty()){
        int a = q.front();
        q.pop();

        mp[a] = mp[a] + (bw[a] == 'B' ? -1 : 1);

        mp[parents[a]] += mp[a];

        if(mp[a] == 0) ret++;

        ind[parents[a]]--;
        if(ind[parents[a]] == 0){
            q.push(parents[a]);
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
        cout << endl;
    }
}