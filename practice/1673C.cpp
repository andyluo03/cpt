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
    long long ret; 
    
    vector<int> palindromes;
    //gen palindromes;

    vector<int> dp(n);

    for(int i = 0; i < palindromes.size(); i++){
        
    }

    cout << (dp[n-1] % 1000000007);
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