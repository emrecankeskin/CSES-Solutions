#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,m,count = 0,i=0,j=0;
    long long k;
    cin>>n>>m>>k;
    int arr[n];
    int app[m];
    for(int i = 0; i < n; ++i){
        cin>> arr[i];
    }
    for(int i = 0; i < m; ++i){
        cin>> app[i];
    }
    sort(arr,arr+n);
    sort(app,app+m);

    while(i<n && j< m){
        if(arr[i] - k > app[j]){
            j++;
        }else if(arr[i] + k < app[j]){
            i++;
        }else{
            count++;
            i++;
            j++;
        }
    }

    cout<<count<<"\n";

}