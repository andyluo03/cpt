#include <bits/stdc++.h>

using namespace std;

int coins_permutations(vector<int> coins, int goal){
    //Classic Knapsack Problem - Coin Change 2 - includes permutations
    vector<int> dp(goal+1);
    dp[0] = 1;
    for(int i = 1; i < dp.size(); i++){
        for(int a : coins){
            if(i - a < 0) continue;
            if(dp[i-a] != 0)
                dp[i] += dp[i-a];
        }
    }
    return dp[goal];
}

int coins_combinations(vector<int> coins, int goal){
    vector<int> dp(goal+1);
    dp[0] = 1; dp[dp.size()-1] = -1;
    for(int a : coins){
        for(int i = a; i < dp.size(); i++){
            dp[i] = dp[i] + dp[i-a];
        }
    }
    return dp[dp.size()-1];
}

int min_coin(vector<int> coins, int goal){
    vector<int> dp(goal+1, INT_MAX);
    dp[0] = 0;
    for(int a : coins){
        for(int i = a; i < dp.size(); i++){
            if(dp[i-a] == INT_MAX) continue;
            dp[i] = min(dp[i-a] + 1, dp[i]);
        }
    }
    return dp[dp.size()-1];
}


int main(){
    vector<int> coins = {1, 3, 10};
    cout << min_coin(coins, 103);
}