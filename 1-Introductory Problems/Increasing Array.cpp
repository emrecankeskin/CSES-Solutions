#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    long long total = 0;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    for(int i = 0; i<n-1; ++i){
        if(arr[i] > arr[i+1]){
            total = total + (arr[i]-arr[i+1]);
            arr[i+1] = arr[i];
        }
    }   

    cout<<total<<"\n";

}