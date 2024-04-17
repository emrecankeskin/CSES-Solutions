#include <bits/stdc++.h>

using namespace std;

const int mxN = 1*1e5;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n,inp;
    cin>>n;
    vector<int> vec;
    for(int i = 0; i<n; ++i){
        cin>>inp;
        int ptr = upper_bound(vec.begin(),vec.end(),inp)-vec.begin();
        if(ptr < vec.size()){
            vec[ptr] = inp;
        }else{
            vec.push_back(inp);
        }
    }
    cout<<vec.size()<<"\n";

    

}