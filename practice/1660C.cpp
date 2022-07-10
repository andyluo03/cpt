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
    string s; 
    cin >> s;
    vector<bool> prev(26);
    int rem = 0;
    for(char i : s){
        if(prev[i-'a']){
            rem+=2;
            for(int j = 0; j < prev.size(); j++)
                prev[j] = false;
        }else{
            prev[i-'a'] = true;
        }
    }
    cout << (s.size() - rem);
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