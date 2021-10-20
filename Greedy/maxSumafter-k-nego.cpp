#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int neg=0;
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i] < 0)
                neg++;
            else
                break;
        }
        if (neg > 0)
        {
            if (neg >= k)
          {
            for(int i=0;i<k;i++)
            {
                if (nums[i] < 0)
                    nums[i] = -nums[i];
                else
                    break;
            }
          }
            else
            {
                for(int i=0;i<neg;i++)
                    nums[i] = -nums[i];
                sort(nums.begin(),nums.end());
                if ((k-neg)%2!=0)
                    nums[0] = -nums[0];
            }
            
        }
        else
            if (k%2!=0)
                nums[0] = -nums[0];
        int result=0;
        for(int i=0;i<nums.size();i++)
            result+=nums[i];
        return result;
    }
};