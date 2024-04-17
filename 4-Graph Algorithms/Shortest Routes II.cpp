#include <bits/stdc++.h>
using namespace std;


//floyd-warshall algorithm learn
int main() {
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n, m,q,a,b,inf = 1e13;
	cin >> n >> m>>q;

	vector<vector<long long>> adj(n,vector<long long>(n,LLONG_MAX));
	for(int i = 0; i<n; ++i){
		adj[i][i] = 0;
	}
	for (int i = 0; i < m; i++) {
		long long a, b, c;
		cin >> a >> b >> c;
		adj[a - 1][b - 1] = min(adj[a - 1][b - 1],c);
		adj[b - 1][a - 1] = min(adj[b - 1][a - 1],c); 
	}
	for(int k = 0; k<n; ++k){
		for(int i = 0; i<n; ++i){
			for(int j = 0; j<n; ++j){
				if(adj[i][k] <LLONG_MAX && adj[k][j] < LLONG_MAX){
					adj[i][j] = min(adj[i][j],adj[i][k]+adj[k][j]);
				}
			}
		}
	}
	while(q--){
		cin>>a>>b;
		if(adj[a-1][b-1] >= LLONG_MAX){
			cout<<"-1\n";
		}else{
			cout<<adj[a-1][b-1]<<"\n";
		}
	}

}