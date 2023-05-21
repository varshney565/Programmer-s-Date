#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;cin>>s;
    string t = "SOS";
    int j = 0,ans = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(s[i] != t[j]) ans++;
        j = (j+1)%3;
    }
    cout<<ans<<"\n";
    return 0;
} 
