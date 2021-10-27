#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int calculate(vector<int>& nums)
    {
        vector<int> dp(nums.size()+1,0);
        dp[1] = nums[0];
        for(int i=2;i<=nums.size();i++)
            dp[i] = max(dp[i-1],dp[i-2]+nums[i-1]);
            return dp[nums.size()];
    }
    int rob(vector<int>& nums) {
        if (nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        vector<int> numa(nums.begin()+1,nums.end());
        vector<int> numb(nums.begin(),nums.end()-1);
        return max(calculate(numa),calculate(numb));
    }
};