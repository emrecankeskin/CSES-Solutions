#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    long long chr[26] = {0};
    long long odd = 0;

    string str;
    cin>>str;
    for(char c: str){
        chr[c-'A']++;
    }
    for(int i = 0; i<26; ++i){
        if(chr[i] > 0){
            if(chr[i] % 2 != 0){
                odd++;
            }
        }
    }

    if(str.size() % 2 == 0){
        if(odd > 0){
            cout<<"NO SOLUTION\n";
        }else{
            int len = str.size() / 2;
            for(int j = 0; j<len; ++j){
                for(int i = 0; i<26; ++i){
                    if(chr[i] > 0){
                        while(chr[i] > 0){
                            char c = i+'A';
                            str[j] = c;
                            str[str.size()-1-j] = c;
                            chr[i] -= 2;
                            j++;
                        }

                    }
                }
            }
            cout<<str<<"\n";
        }
    }else{
        if(odd > 1){
            cout<<"NO SOLUTION\n";
        }else{
            int len = str.size() / 2;
            for(int j = 0; j<len; ++j){
                for(int i = 0; i<26; ++i){
                    if(chr[i] > 0 ){
                        while(chr[i] > 0 && chr[i] > 1){
                            char c = i+'A';
                            str[j] = c;
                            str[str.size()-1-j] = c;
                            chr[i] -=2;
                            j++;
                        }
                    }
                }
            }
            for(int i = 0; i< 26; ++i){
                if(chr[i] == -1 || chr[i] > 0){
                    str[str.size()/2] = i+'A';
                }
            }
            cout<<str<<"\n";
        }
        
    }
}