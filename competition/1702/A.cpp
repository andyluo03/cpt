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
    int t = n;
    int pt = -1;

    while(t > 0){
        pt++;
        t/=10;
    }

    int f = (pow(10, pt) + 0.5);

    if(n == f){
        cout << 0;
        return;
    }

    int ret = n - pow(10, pt);

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