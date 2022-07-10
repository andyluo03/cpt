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
    if(n > 8){
        cout << "NO";
        return;
    }

    vector<int> pos;
    vector<int> neg;
    vector<int> arr;

    for(int i = 0; i < n; i++){
        int tmp; cin >> tmp;
        if(tmp > 0) pos.push_back(tmp);
        if(tmp < 0) neg.push_back(tmp);
        if(tmp == 0 && arr.size() < 2) arr.push_back(0);
    }

    if(pos.size() > 2 || neg.size() > 2){
        cout << "NO";
        return;
    }

    for(int i : pos)
        arr.push_back(i);
    
    for(int i : neg)
        arr.push_back(i);

    for(int i = 0; i < arr.size(); i++){
        for(int j = i+1; j < arr.size(); j++){
            for(int k = j+1; k < arr.size(); k++){
                bool ok = false;
                for(int l = 0; l < arr.size(); l++){
                    if(arr[i] + arr[j] + arr[k] == arr[l]) ok = true;
                }
                if(!ok){
                    cout << "NO";
                    return;
                }
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