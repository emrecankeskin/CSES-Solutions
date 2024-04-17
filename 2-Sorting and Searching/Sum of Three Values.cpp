#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,x;
    cin>>n>>x;
    vector<pair<int,int>> arr(n);

    for(int i = 0; i<n; ++i){
        cin>>arr[i].first;
        arr[i].second = i;
    }
    sort(arr.begin(),arr.end());
    for(int i = 0; i<n; ++i){
        long long val = x -arr[i].first;
        for(int j = i+1, k = n-1; j<k; ++j){
            while(j<k && arr[j].first + arr[k].first > val){
                --k;
            }
            if(j<k && arr[j].first+arr[k].first == val){
                cout<<arr[i].second+1<<" "<<arr[j].second+1<<" "<<arr[k].second+1<<"\n";
                return 0;
            }
        }

    }

    cout<<"IMPOSSIBLE\n";


}
