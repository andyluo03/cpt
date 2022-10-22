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
    int n; cin >> n;
    vector<int> a(n);
    forn(n){cin >> a[i];}
    sort(a.begin(), a.end());

    //binary search ?
    int ans = 0;
    int k = 0;
    int l = 0;
    int h = (a.size()+1)/2;

    while(l <= h){
        k = (l+h)/2;

        //check if it's possible !
        bool possible = true;

        int deletions = -1;
        int cur = a.size()-1;

        for(int i = 0; i < k; i++){
            while(a[cur] > k - i){
                if(cur <= deletions){
                    possible = false;
                    break;
                }

                cur--;
            }

            if(deletions >= cur){
                possible = false;
                break;
            }

            cur--;
            deletions++;
        }

        if(possible){
            ans = k;
            l = k+1;
        }else{
            h = k-1;
        }
    }

    cout << ans;
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