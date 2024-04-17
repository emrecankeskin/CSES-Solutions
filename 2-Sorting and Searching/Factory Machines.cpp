#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,t,l=0,r=1e18,mid=0,temp = 0;
    long long count = 0;
    cin>>n>>t;
    vector<long long> arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }


    while(l<=r){
        mid = (l+r) / 2;
        temp = 0;
        for(int i = 0;i<n; ++i){
            temp += min(mid / arr[i],(long long)1e9);
        }
        if(temp >= t){
            count = mid;
            r = mid -1;
        }else{
            l = mid + 1;
        }
    }

    cout<<count<<"\n";

}
