#include<bits/stdc++.h>
using namespace std;
int matrixSum(vector<vector<int>>& nums) {
    int n = nums.size(),m = nums[0].size(),ans = 0;
    for(int i = 0 ; i < n ; i++) sort(nums[i].begin(),nums[i].end(),greater<int>());
    for(int j = m-1 ; j >= 0 ; j--){
        int val = 0;
        for(int i = n-1 ; i >= 0 ; i--){
            val = max(val,nums[i][j]);
        }
        ans += val;
    }
    return ans;
}

int main() {
    int n,m;cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));
    for(int i = 0 ; i < n ; i++)
        for(int j = 0 ; j < m ; j++)
            cin>>arr[i][j];
    cout<<matrixSum(arr)<<"\n";
    return 0;
}
