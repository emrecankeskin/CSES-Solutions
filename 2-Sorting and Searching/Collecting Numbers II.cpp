#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,x,y,n,k,count = 1;
    cin>>n>>k;
    vector<pair<int,int>> vec(n);
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>a;
        vec[a-1].first = a;
        vec[a-1].second = i;

        arr[i] = a;
    }
    for(int i = 0; i<n-1; ++i){
        if(vec[i].second > vec[i+1].second){
            count++;
        }
    }
    for(int m = 0; m < k; ++m){
        cin>>x>>y;
        if(vec[arr[x-1]-1].second < vec[arr[y-1]-1].second){
            count--;
        }else{
            count++;
        }
        swap(vec[arr[x-1]-1].second,vec[arr[y-1]-1].second);
        swap(arr[x-1],arr[y-1]);
        
        cout<<count<<"\n";
    }
    
    
}