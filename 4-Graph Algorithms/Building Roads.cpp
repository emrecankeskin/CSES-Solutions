#include <bits/stdc++.h>

using namespace std;

void dfs(int u ,vector<vector<int>>& vec,vector<bool>& vis){
    vis[u] = true;
    for(int v : vec[u]){
        if(!vis[v]){
            dfs(v,vec,vis);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,a,b;
    cin>>n>>m;
    vector<vector<int>> vec(n);
    vector<int> ans;
    vector<bool> vis(n,false);
    for(int i = 0; i<m; ++i){
        cin>>a>>b;
        vec[a-1].push_back(b-1);
        vec[b-1].push_back(a-1);
    }
    for(int i = 0; i<n; ++i){
        if(!vis[i]){
            ans.push_back(i);
            dfs(i,vec,vis);
        }
    }
    cout<<ans.size()-1<<"\n";
    for(int i = 1; i<ans.size(); ++i){
        cout<<ans[0]+1<<" "<<ans[i] + 1<<"\n";
    }
}