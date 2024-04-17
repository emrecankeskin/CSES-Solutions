#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long n,number,max = 0;
    long long total = 0;
    cin>>n;
    max = n;
    while(--n){
        cin>>number;
        total = total + number;
    }
    cout<<((max*(max+1))/2) - total<<"\n";
}