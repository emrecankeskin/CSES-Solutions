#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,count = 0,temp = 0;
    vector<pair<int,int>> vec;
    cin>>n;

    while(n--){
        cin>>a>>b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end(),[](auto left,auto right){
        return left.second < right.second;
    });
    for(auto& a: vec){
        if(temp <= a.first){
            temp = a.second;
            count++;
        }
    }

    cout<<count<<"\n";
    
}