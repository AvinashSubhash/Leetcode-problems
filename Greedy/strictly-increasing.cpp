#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0,p;
        for(int i=1;i<nums.size();i++)
        {
            if (nums[i]-nums[i-1] < 1)
            {
                p = (nums[i-1]-nums[i])+1;
                count += p;
                nums[i] += p;
            }
        }
        return count;
    }
};