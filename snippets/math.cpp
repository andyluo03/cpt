#include <bits/stdc++.h>
using namespace std;
const int MOD = int(1e9) + 7;
const int MAXN = 1123456;

//PRIMES
vector<bool> primes(MAXN, true);
void cprime(){
    for(int i = 2; i < primes.size(); i++)
        if(primes[i] == true)
            for(int j = i*2; j < primes.size(); j += i)
                primes[j] = false;
    primes[0] = false;
    primes[1] = false;
}

