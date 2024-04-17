#include <bits/stdc++.h>

using namespace std;


void dfs(vector<string>& vec,int i,int j,int m,int n){
    if(i < 0 || j < 0 || i==m||j==n || vec[i][j] != '.'){
        return;
    }
    vec[i][j] = '?';
    dfs(vec,i-1,j,m,n);
    dfs(vec,i+1,j,m,n);
    dfs(vec,i,j-1,m,n);
    dfs(vec,i,j+1,m,n);

}


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<string> vec;
    int m,n,count = 0;
    string str;
    cin>>m>>n;
    for(int i = 0; i<m; ++i){
        cin>>str;
        vec.push_back(str);
    }
    for(int i = 0; i<m; ++i){
        for(int j = 0; j<n; ++j){
            if(vec[i][j] == '.'){
                dfs(vec,i,j,m,n);
                count++;
            }
        }
    }
    cout<<count<<"\n";

}