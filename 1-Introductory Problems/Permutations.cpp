#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    if(n==1){
        cout<<"1\n";
    }
    else if(n<4){
        cout<<"NO SOLUTION\n";
    }else{
        if(n % 2  == 1){
            int temp = n-1;
            while(temp >= 1){
                cout<<temp<<" ";
                temp = temp - 2;
            }
            while(n >= 0){
                cout<<n<<" ";
                n = n - 2;
            }
        }else{
            int temp = n-1;
            while(temp >= 1){
                cout<<temp<<" ";
                temp = temp - 2;
            }
            while(n > 0){
                cout<<n<<" ";
                n = n - 2;
            }
        }
    }
}