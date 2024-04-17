#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    set<int> st;

    int t,in;
    cin>>t;
    while(t--){
        cin>>in;
        st.insert(in);
    }
    cout<<st.size()<<"\n";
    

}