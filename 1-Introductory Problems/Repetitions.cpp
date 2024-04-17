#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string str;
    int sz,l=0,r=0,mx=0;
    cin>>str;
    sz = str.size();
    while(r != (sz-1)){
        if(str[r] == str[r+1]){
            r++;
        }else{
            mx = max(mx,(r-l+1));
            r++;
            l=r;
        }
    }
    mx = max(mx,(r-l+1));
    cout<<mx;

}