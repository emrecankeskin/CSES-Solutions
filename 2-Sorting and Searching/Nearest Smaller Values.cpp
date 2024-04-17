#include <bits/stdc++.h>

using namespace std;

int main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a;
    cin>>n;
    vector<pair<int,int>> vec;
    stack<pair<int,int>> st;
    for(int i = 0;i<n; ++i){
        cin>>a;
        vec.push_back({a,i});
    }
    for(int i = 0; i<n; ++i){
        while(!st.empty()&&st.top().first >= vec[i].first){
            st.pop();
        }
        if(st.empty()){
            cout<<0<<" "; 
        }else{
            cout<<st.top().second+1<<" ";
        }
        st.push(vec[i]);

    }
    
    
}
