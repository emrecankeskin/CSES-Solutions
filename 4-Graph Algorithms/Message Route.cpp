#include <bits/stdc++.h>

using namespace std;

const int mxN = 1*1e5;

// dijkstra sortest path learn
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,a,b;
    vector<vector<int>> vec(mxN);
    vector<int> parent(mxN,-1);
    vector<int> ans;
    queue<int> q;
    cin>>n>>m;
    for(int i = 0; i<m; ++i){
        cin>>a>>b;
        vec[a-1].push_back(b-1);
        vec[b-1].push_back(a-1);
    }
    
    q.push(0);
    parent[0] = -2;
    while(!q.empty()){
        int u = q.front();q.pop();

        for(int v : vec[u] ){
            if(parent[v] < 0){
                parent[v] = u;
                q.push(v);
            }
        }
    
    }
    if(parent[n-1] < 0){
        cout<<"IMPOSSIBLE\n";
    }else{
        int u = n-1;
        while(u){
            ans.push_back(u);
            u = parent[u];
        }
        ans.push_back(0);
        reverse(ans.begin(),ans.end());
        cout<<ans.size()<<"\n";
        for(int a : ans){
            cout<<a+1<<" ";
        }
    }

}