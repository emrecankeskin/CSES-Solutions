#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<((a+b) % 3 == 0 && 2*a >=b && 2*b>=a ? "YES" : "NO" )<<"\n";
    }
}