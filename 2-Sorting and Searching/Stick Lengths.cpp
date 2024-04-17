#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,sum = 0,pivot = 0;
    cin>>n;
    int arr[n];
    // 1 2 2 3 5
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    pivot = arr[n/2];
    for(int i = 0; i < n; ++i){
        sum += abs(arr[i]-pivot);
    }

    cout<<sum<<"\n";


}