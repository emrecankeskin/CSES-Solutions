#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin>>n;
    if(n % 10 == 0){
        cout<<n/10 * 2;
    }else{
        cout<<n/10 * 2 + 1;
    }


}
