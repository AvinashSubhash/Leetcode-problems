#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> gd;
        int s = nums.size()/2;
        for(int i=0;i<nums.size();i++)
        {
            gd[nums[i]]++;
            if (gd[nums[i]] > s)
                return nums[i];
        }
        return 0;
        
    }
};