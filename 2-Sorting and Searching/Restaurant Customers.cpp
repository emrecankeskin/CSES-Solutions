#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,count = 0,ans = 0;
    vector<pair<int,int>> vec;
    cin>>n;
    
    while(n--){
        cin>>a>>b;
        vec.push_back({a,1});
        vec.push_back({b,-1});

    }

    sort(vec.begin(),vec.end());
    for(pair<int,int>& p: vec){
        count += p.second;
        ans = max(ans,count);
    }
    cout<<ans<<"\n";
}