#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int k,n,mod = 1e9 + 7;
    cin>>k>>n;
    vector<int> dp(n+1,0);
    vector<int> arr(k,0);
    dp[0] = 1;
    for(int i = 0; i<k; ++i){
        cin>>arr[i];
    }
    for(int val : arr){
         for(int i=1; i<=n; ++i){
            if(i-val>=0){
                dp[i] = (dp[i]+ dp[i-val]) % mod;
            }
        }
    }

    cout<<dp[n]<<"\n";

}
