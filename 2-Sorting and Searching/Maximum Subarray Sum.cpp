#include <bits/stdc++.h>

using namespace std;


const int mxN = 2*1e5;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,in,sum = 0,mx = INT_MIN;

    long long arr[mxN];
    cin>>n;
    for(int i = 0; i<n; ++i){
        cin>>arr[i];
    }
    mx = arr[0];
    for(int i = 0; i<n; ++i){
        sum = sum + arr[i];
        if(sum > mx){
            mx = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    }

    cout<<mx<<"\n";

}