#include <bits/stdc++.h>

using namespace std;


int gray(int n){
    return n ^(n>>1);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    int len;
    cin>>n;
    len = pow(2,n);
    for(int i = 0; i<len; ++i){
        int a = gray(i);
        bitset<16> b(a);
        string str = b.to_string();
        for(int i=(16-n); i<16; i++){
            cout<<str[i];
        } 
        cout<<"\n";
    }
}