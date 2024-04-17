#include <bits/stdc++.h>

using namespace std;

int n,m;
vector<pair<int,int>> dim = {{-1,0},{1,0},{0,-1},{0,1}};
bool check(int i,int j,int n,int m){
    return i >= 0 && j >=0 &&  i < n && j < m;
}

void bfs(int sx,int sy,vector<vector<pair<int,int>>>& path,vector<vector<bool>>& vis){
    queue<pair<int,int>> q;
    q.push({sx,sy});
    while(!q.empty()){
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();

        for(auto mv : dim){
            int mvx = mv.first;
            int mvy = mv.second;

            if(check(cx+mvx,cy+mvy,n,m) && !vis[cx+mvx][cy+mvy]){
                    q.push({cx+mvx,cy+mvy});
                    vis[cx+mvx][cy+mvy] = true;
                    path[cx+mvx][cy+mvy] = {mvx,mvy};
            }
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


    int sx,sy,ex,ey;            // U D L R
    cin>>n>>m;
    vector<vector<pair<int,int>>> path(n,vector<pair<int,int>>(m,{-1,-1}));
    vector<vector<bool>> vis(n,vector<bool>(m,false));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j<m; ++j){
            char c;
            cin>>c;
            if( c == '#'){
                vis[i][j] = true;
            }
            if( c == 'A'){
                sx = i;
                sy = j;
            }

            if( c == 'B'){
                ex = i;
                ey = j;
            }
        }
    }
    bfs(sx,sy,path,vis);

    if(!vis[ex][ey]){
        cout<<"NO\n";
        return 0;
    }

    cout<<"YES\n";

    vector<pair<int,int>> ans;
    pair<int,int> end = {ex,ey};

    while(end.first != sx || end.second != sy){
        ans.push_back(path[end.first][end.second]);
        end.first -= ans.back().first;
        end.second -= ans.back().second;
    }

    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";

    for(auto c: ans){
        if(c.first == 1 && c.second == 0){
            cout<<'D';
        }else if(c.first == -1 && c.second == 0){
            cout<<'U';
        }
        else if(c.first == 0 && c.second == 1){
            cout<<'R';
        }
        else if(c.first == 0 && c.second == -1){
            cout<<'L';
        }
    }
}