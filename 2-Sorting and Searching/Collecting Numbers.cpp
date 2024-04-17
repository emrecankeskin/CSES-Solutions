#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    vector<pair<int,int>> vec;
    int a,n,count = 1;
    cin>>n;
    for(int i = 0; i<n; ++i){
        cin>>a;
        vec.push_back({a,i});
    }
    sort(vec.begin(),vec.end());
    for(int i = 0; i<n-1; ++i){
        if(vec[i].second > vec[i+1].second){
            count++;
        }
    }
    
    cout<<count<<"\n";
}