#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mod = 1e9+7;
    string str;
    cin>>n;
    vector<string> mp;
    vector<vector<int>> dp(n,vector<int>(n,0));
    dp[0][0] = 1;
    for(int i = 0; i<n; ++i){
        cin>>str;
        mp.push_back(str);
    }
    for(int i = 0; i<n; ++i){
        for(int j = 0; j<n; ++j){
            if(i){
                dp[i][j] = dp[i][j] + dp[i-1][j];
                dp[i][j] %= mod;
            }
            if(j){
                dp[i][j] = dp[i][j] + dp[i][j-1];
                dp[i][j] %= mod;
            }
            if(mp[i][j] == '*'){
                dp[i][j] = 0;
            }
        }
    }

    cout<<dp[n-1][n-1];
    

}
