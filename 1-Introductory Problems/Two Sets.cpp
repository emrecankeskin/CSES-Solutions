#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long a,temp,n;
    cin>>n;
    a = ((n)*(n+1)) / 2;
    if(a % 2 == 0){
        vector<long long> v1,v2;
        temp = a / 2;
        cout << "YES\n";
        while(n){
            if(temp - n >= 0){
                v1.push_back(n);
                temp = temp - n;
            }else{
                v2.push_back(n);
            }
            n--;
        }
        cout<< v1.size()<<"\n";
        for(auto a : v1){
            cout<<a<<" "; 
        }
        cout<<"\n"<<v2.size()<<"\n";
        for(auto a : v2){
            cout<<a<<" "; 
        }
    }else{
        cout << "NO\n";
    }
}