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

void solution(){
    //trivial knapsack dp
    string s; cin >> s;
    vector<int> ans(s.size()+1, 200);
    vector<int> m1(s.size()+1, -1);
    vector<int> m2(s.size()+1, -1);

    ans[0] = 0;

    int n; cin >> n;
    vector<string> sub(n);

    forn(n){cin >> sub[i];}

    //knapsack time

    for(int i = 0; i < s.size(); i++){
        //iterating through s
        for(int x = 0; x < sub.size(); x++){
            string t = sub[x];
            if(i + t.size() > s.size()) continue;
            bool good = true;
            for(int j = 0; j < t.size(); j++){
                if(s[i+j] != t[j]){
                    good = false;
                    break;
                }
            }

            //

            if(good){
                for(int j = 0; j < t.size(); j++){
                    if(ans[i+j+1] > ans[i] + 1){
                        ans[i+j+1] = ans[i]+1;
                        m1[i+j+1] = x;
                        m2[i+j+1] = i+1;
                    }
                }
            }
        }
    }

    if(ans[s.size()] == 200){
        cout << -1 << endl;
        return;
    }

    cout << ans[s.size()] << endl;

    cout << endl;
    int ci = s.size();
    forn(ans[s.size()]){
        //index 
        cout << m1[ci] + 1;
        cout << " ";
        cout << m2[ci];
        cout << endl;

        //this is wrong
        ci = m2[ci]-1;
        
    }
}

int main(){
    set_io
    int tc = 1;
    cin >> tc;
    for(int i = 1; i <= tc; i++){
        // cout << "Case #" << t << ": ";
        solution();
    }
}