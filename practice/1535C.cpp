#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
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
    string s; cin >> s;
    //beautiful substrings !
    //looks to be like kadane's algorithm, but the ? is gonna be hard to track
    long long ans = 0; //add up
    long long l = 0;
    long long q = 0;
    bool fo = (s[0] == '1' ? true : false); //WILL MISS IF ? IS THE FIRST CASE
    bool fod = (s[0] != '?' ? true : false);

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '?'){
            q++;
        }else{
            if(!fod){
                if((i%2 == 0 && s[0] == '1') || (i%2 == 1 && s[0] == '0'))
                    fo = true;
                fod = true;
            }

            char t = i%2 != fo ? '1' : '0';
            if(s[i] == t){
                q = 0;
            }else{
                ans += ((l+1)*l)/2;
                fo = !fo;
                ans-=((q+1)*q)/2;
                l = q;
                q = 0;
            }
        }
        l++;
    }
    ans += ((l+1)*l)/2;
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