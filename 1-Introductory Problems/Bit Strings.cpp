#include <bits/stdc++.h>

using namespace std;

long long fastpow(long long a,long long b){
    long long sol = 1;
    while(b > 0){
        if ( b & 1){
            sol = (sol * a) % ((long long)1e9 + 7);
        }
        a = (a*a) % ((long long)1e9 + 7);
        b >>=1;
    }
    return sol;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int inp;
    cin >> inp;
    cout<<fastpow(2,inp);
}