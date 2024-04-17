#include <bits/stdc++.h>

using namespace std;



int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,s = 0;
    cin>>n;
    queue<int> q;
    for(int i = 1; i <= n; ++i){
        q.push(i);
    }

    while(!q.empty()){
        if(s == 0){
            int val = q.front();q.pop();
            q.push(val);
            s = 1;
        }else{
            int val = q.front();q.pop();
            cout<<val<<" ";
            s = 0;
        }
    }



}