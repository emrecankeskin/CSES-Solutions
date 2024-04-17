#include <bits/stdc++.h>

using namespace std;



int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    long long arr[n],pre = 0,ptr;
    for(int i = 0; i < n; ++i){
        cin>>arr[i];
    }

    sort(arr,arr+n);
    for(ptr = 0; ptr<n; ++ptr){
        if(pre + 1 < arr[ptr]){
            break;
        }else{
            pre += arr[ptr];
        }
    }

    cout<<pre+1<<"\n";

    

}