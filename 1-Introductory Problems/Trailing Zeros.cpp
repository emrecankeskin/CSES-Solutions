#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,count=0;
    cin>>n;

    while(n > 0){
        count += n / 5;
        n = n / 5;
    }

    cout<<count<<"\n";
}