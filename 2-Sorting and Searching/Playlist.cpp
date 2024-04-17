#include <bits/stdc++.h>

using namespace std;

const int mxN = 1*1e5;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,mx = 0,ptr = 0;
    map<int,int> mp;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }

    for(int i = 0; i<n; ++i){
        while(ptr<n && mp[arr[ptr]] < 1){
            mp[arr[ptr]]++;
            ptr++;
        }
        mx = max(ptr-i,mx);
        mp[arr[i]]--;
    }
    cout<<mx<<"\n";
}