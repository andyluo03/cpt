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
    int n, x;
    cin >> n >> x;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }

    vector<int> ml(n+1);

    for(int l = 1; l <= n; l++){
        int csum = 0;
        for(int i = 0; i < n; i++){
            csum += a[i];
            if(i == l-1) ml[l] = csum;
            if(i >= l){
                csum -= a[i-(l)];
                ml[l] = max(ml[l], csum);
            }
        }
    }

    vector<int> ans(n+1, INT_MIN);

    for(int k = 0; k <= n; k++){
        for(int i = 0; i < ml.size(); i++){
            int tmp = ml[i] + min(k, i) * x;
            ans[k] = max(tmp, ans[k]);
        }
    }

    for(int f : ans)
        cout << f << " ";
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