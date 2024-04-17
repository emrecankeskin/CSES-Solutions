#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int cost;
    string a,b;
    cin>>a>>b;
    int row = a.size();
    int col = b.size();
    int dp[row+1][col+1];

    for(int i = 0; i<=col; ++i){
        dp[0][i] = i; 
    }
    for(int i = 0; i<=row; ++i){
        dp[i][0] = i; 
    }
    for(int i = 1; i<=row; ++i){
        for(int j = 1; j<=col; ++j ){
            if(a[i-1] == b[j-1]){
                cost = 0;
            }else{
                cost = 1;
            }

            int k = min(dp[i-1][j]+1,dp[i-1][j-1] + cost);
            dp[i][j] = min(dp[i][j-1]+1,k);
        }
    }

    cout<<dp[row][col]<<"\n";
}
