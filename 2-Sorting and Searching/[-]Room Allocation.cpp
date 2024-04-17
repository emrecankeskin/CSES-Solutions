#include <bits/stdc++.h>

using namespace std;

int search(vector<pair<int,int>>& arr,int val){
    int l = 0;
    int r = arr.size()-1;
    int mid;
    while(l<r){
        mid = (l + r) / 2;
        if(arr[mid].first < val){
            return arr[mid].second;
        }else if(arr[mid].first >= val){
            r = mid;
        }
    }

    return -1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,a,b,count = 1,len;
    cin>>n;

    

}