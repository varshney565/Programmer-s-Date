#include<bits/stdc++.h>
using namespace std;

int main() {
    long t;cin>>t;
    long cnt = 3,top = 3,totalProcessed = 0;
    while(cnt < t){
        totalProcessed += top;
        cnt = cnt+2*top;
        top = 2*top;
    }
    long ans = top-(t-totalProcessed-1);
    cout<<ans<<"\n";
    return 0;
}
