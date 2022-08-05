#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define forn(n) for(int i = 0; i < n; i++)
#define endl "\n"

typedef long long ll;
using namespace std;
template<class T> 
int amin(T a, T b){if(a < b) return a; return b;}
template<class T>
int amax(T a, T b){if(a > b) return a;return b;}
template<class T>
void d_vector(vector<T> v){for(auto a : v) cout << a << " ";}

const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

bool valid(string s){
    int bal = 0;
    forn(s.size()){
        bal = bal + (s[i] == '(' ? 1 : -1);
        if(bal < 0) return false;
    }
    return bal == 0;
}

void solution(){
    string s; cin >> s;
    vector<int> pos;
    int op = s.size()/2; int cl = s.size()/2;
    forn(s.size()){
        if(s[i] == '(') op--;
        if(s[i] == ')') cl--;
        if(s[i] == '?') pos.push_back(i);
    }

    forn(pos.size()){
        if(i < op) s[pos[i]] = '(';
        else s[pos[i]] = ')';
    }

    bool ok = true;
    if(op > 0 && cl > 0){
        s[pos[op-1]] = ')';
        s[pos[op]] = '(';
        if(valid(s)) ok = false;
    }


    cout << (ok ? "YES" : "NO");
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        // cout << "Case #" << t << ": ";
        solution();
        cout << endl;
    }
}