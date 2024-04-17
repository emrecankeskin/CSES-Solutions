#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,val,in,pos=0,l=0,r;
    int i=-1,j=-1,len;
    vector<pair<int,int>> vec;
    cin>>n>>val;
    while(n--){
        cin>>in;
        vec.push_back({in,pos});
        pos++;
    }
    sort(vec.begin(),vec.end());
    len = vec.size();
    r = len - 1;
    while( l < r && r < len && l >= 0){
        if(vec[l].first + vec[r].first == val){
            i = vec[l].second;
            j = vec[r].second;
            break;
        }else if(vec[l].first + vec[r].first > val){
            r--;
        }else {
            l++;
        }
    }

    if(i==-1){
        cout<<"IMPOSSIBLE\n";
    }else{
        cout<<i+1<<" "<<j+1<<"\n";
    }
    
}