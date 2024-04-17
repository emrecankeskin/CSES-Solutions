#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b;
    long long ans = 0;
    long long sum = 0;
    cin>>n;
    vector<pair<int,int>> vec;
    for(int i = 0; i < n; ++i){
        cin>>a>>b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end());

    for(auto& p:vec){
        sum += p.first;
        ans += p.second-sum;
    
    }


    cout<<ans;


}
