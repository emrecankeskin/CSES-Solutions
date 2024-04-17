#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m;
    cin>>n>>m;
    int price[n];
    int max[m];
    multiset<int,greater<int>> s;
    for(int i = 0; i<n; i++){
        cin>>price[i];
        s.insert(price[i]);
    }
    for(int i = 0; i<m; i++){
        cin>>max[i];
    }
    for(int i = 0; i<m; ++i){
        auto it = s.lower_bound(max[i]);
        if(it == s.end())
            cout<<-1<<"\n";
        else{
            cout<<*it<<"\n";
            s.erase(it);
        }
    }
 
}
    




