#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,val;

    cin>>n>>val;
    long long arr[n];
    long long dp[val+1];
    dp[0] = 0;
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    for(int i = 1; i<=val+1; ++i){
        dp[i] = INT_MAX;
        for(int a : arr){
            if(i-a >= 0){
                dp[i] = min(dp[i],dp[i-a]+1);
            }
        }
    }
    if(dp[val] == INT_MAX){
        cout<<-1<<"\n";
    }else{
        cout<<dp[val]<<"\n";
    }
}
