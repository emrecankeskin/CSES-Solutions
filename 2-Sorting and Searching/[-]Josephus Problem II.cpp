#include <bits/stdc++.h>

using namespace std;

int josephus(int n, int k) {
    int res = 0;
    for (int i = 1; i <= n; ++i)
      res = (res + k) % i;
    return res + 1;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,k,clc = 0;
    cin>>n>>k;
    cout<<josephus(n,k);



}