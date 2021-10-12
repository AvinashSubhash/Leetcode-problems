#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int others=0;
        for(int i=0;i<nums.size();i++)
            others+= nums[i];
        sort(nums.begin(),nums.end(),greater<int>());
        vector<int> result;
        int sum2=0;
        for (int i=0;i<nums.size();i++)
        {
            sum2 += nums[i];
            others -= nums[i];
            result.push_back(nums[i]);
            if (sum2 > others)
                break;
        }
        return result;
    }
};