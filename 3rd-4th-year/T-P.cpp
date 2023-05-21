#include<bits/stdc++.h>
using namespace std;

void solve(){
    int tp,ts,n;cin>>tp>>ts>>n;
    vector<int> ps(n),pp(n);
    for(int i = 0 ; i < n ; i++) cin>>pp[i];
    for(int i = 0 ; i < n ; i++) cin>>ps[i];
    int ans = INT_MAX;
    for(int i = 0 ; i < n ; i++){
        if(ps[i] <= ts){
            continue;
        }else{
            ans = min(ans,(tp-pp[i]+ps[i]-ts-1)/(ps[i]-ts));
        }
    }
    if(ans == INT_MAX) cout<<"-1\n";
    else cout<<ans<<"\n";
}

int main() {
    int t;cin>>t;
    while(t--) solve();
    return 0;
} 
