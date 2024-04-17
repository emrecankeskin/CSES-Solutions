#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,mx = 0,idx = 0,sum = 0;
    
    cin>>n;
    vector<long long> arr(n);

    for(int i = 0; i < n; ++i){
        cin>>arr[i];
        if(arr[i] > mx){
            mx = arr[i];
            idx = i;
        }
    }

    for(int i = 0; i < n; ++i){
        if(i != idx){
            sum += arr[i];
        }
    }

    if(mx >= sum){
        cout<<mx*2;
    }else{
        cout<<sum+mx;
    }




}
