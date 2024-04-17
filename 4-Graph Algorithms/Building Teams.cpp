#include <bits/stdc++.h>

using namespace std;

void dfs(int e,vector<vector<int>>& adj,vector<int>& team,int turn=0){
    if(!team[e]){
        if(team[e] ^ turn){
            cout<<"IMPOSSIBLE\n";
            exit(0);
        }
        return;
    }
    team[e] = turn;
    for(auto u : adj[e]){
        dfs(u,adj,team,turn^1);
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,a,b,turn=0;
    cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<int> team(n,-1);
    for(int i = 0; i<m; ++i){
        cin>>a>>b;
        adj[a-1].push_back(b-1);
        adj[b-1].push_back(a-1);
    }

    for(int i = 0; i<n; ++i){
        if(team[i] < 0){
            dfs(i,adj,team);
        }
    }
    for(int a : team){
        cout<<a+1<<" ";
    }
}
