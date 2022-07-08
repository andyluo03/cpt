#include <bits/stdc++.h>
#define set_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define endl "\n"
typedef long long ll;

using namespace std;

template <class T> 
int amin(T a, T b){
    if(a < b) return a;
    return b;
}

template <class T>
int amax(T a, T b){
    if(a > b) return a;
    return b;
}

void solution(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int f = (a+b+c+d);

    if(f == 0){
        cout << 0;
    }else if(f == 4){
        cout << 2;
    }else{
        cout << 1;
    }
}

int main(){
    set_io
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        solution();
        cout << endl;
    }
}