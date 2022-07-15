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
    vector<vector<int>> edges(n+1);
    unordered_map<int, int> count;
    for(int i = 0; i < n; i++){
        int t1, t2; cin >> t1 >> t2;
        count[t1]++; count[t2]++;
        if(count[t1] > 2 || count[t2] > 2){cout << "NO"; return;}
        edges[t1].push_back(t2);
        edges[t2].push_back(t1);
    }
    vector<int> s1(n+1);
    vector<int> s2(n+1);
    queue<int> twos;
    for(auto i : count)
        if(i.second == 2) twos.push(i.first);

    while(!twos.empty()){
        int cur = twos.front();
        int t1 = edges[cur][0];
        int t2 = edges[cur][1];
        //INSERT/CHECK

        if(t1 == -1 && t2 == -1){continue;}

        int chose;
        
        if(t1 != -1 && s1.find(t1) != s1.end() && s1.find(cur) != s1.end()){
            s1.insert(t1);
            s1.insert(cur);
            chose = 1;
        }else if(t1 != -1 && s2.find(t1) != s2.end() && s2.find(cur) != s2.end()){
            s2.insert(t1);
            s2.insert(cur);
            chose = 2;
        }else{cout << "NO"; return;}

        if(chose == 1){
            if(t2 != -1){
                if(s2.find(t2) != s2.end() && s2.find(cur) != s2.end()){
                    s2.insert(t2); s2.insert(cur);
                }else{cout << "NO"; return;}
            }
        }else{
            if(t2 != -1){
                if(s1.find(t2) != s1.end() && s1.find(cur) != s1.end()){
                    s1.insert(t2); s1.insert(cur);
                }else{cout << "NO"; return;}
            }
        }




        //CLEANUP
        for(int i = 0; i < edges[t1].size(); i++)
            if(edges[t1][i] == cur) edges[t1][i] = -1;
        for(int i = 0; i < edges[t2].size(); i++)
            if(edges[t2][i] == cur) edges[t2][i] = -1;
        twos.pop();
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