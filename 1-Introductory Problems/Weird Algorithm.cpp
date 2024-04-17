#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long  num;
    cin>>num;
    while(num != 1){
        cout<<num<<" ";
        if(num % 2 == 1){
            num = (num*3) + 1;
        }else{
            num = num / 2;
        }
    }
    cout<<num<<" ";



}