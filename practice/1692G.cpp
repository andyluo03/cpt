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
    int n, k;
    cin >> n >> k;
    if(n < k+1){
        cout << "0";
        return;
    }
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        arr.push_back(tmp);
    }

    int ret = 0;
    bool pvalid = false;
    for(int i = 0; i < arr.size()-(k); i++){
        if(pvalid == true){
            if(arr[i+k-1] < arr[i+k] * 2){
                ret++;
                continue;
            }
            pvalid = false;
            i = (i+k-1);
            continue;
        }
        
        bool tvalid = true;
        for(int a = i+1; a <= (i+k); a++){
            if(arr[a]*2 <= arr[a-1]){
                tvalid = false;
                pvalid = false;
                i = a-1;
                break;
            }
        }

        if(tvalid){
            pvalid = true;
            ret++;
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