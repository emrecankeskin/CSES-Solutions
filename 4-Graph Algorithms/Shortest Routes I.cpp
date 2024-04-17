#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<vector<pair<int, int>>> adj(n);
	for (int i = 0; i < m; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		adj[a - 1].push_back({b - 1, c});
	}
	vector<long long> dist(n, LLONG_MAX);
	vector<bool> vis(n,false);
	priority_queue<pair<long long,long long>> pq;
	// - dist,node;
	dist[0] = 0;
	pq.push({0,0});
	while(!pq.empty()){
		auto p = pq.top();pq.pop();
		if(vis[p.second]){
			continue;
		}
		vis[p.second] = true;
		for(auto a : adj[p.second]){
			long long nd = a.first,w=a.second;
			if(dist[p.second] + w < dist[nd]){
				dist[nd] = dist[p.second] + w;
				pq.push({-dist[nd],nd});
			}
		}
	}
	for(long long i : dist){
		cout<<i<<" ";
	}

}