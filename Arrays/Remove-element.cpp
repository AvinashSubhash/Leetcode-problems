#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size()==0)
            return 0;
        sort(nums.begin(),nums.end());
        int k=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if (nums[i] > val)
                break;
            if (nums[i]==val)
            {
                nums.erase(nums.begin()+i);
                i--;
                k--;
            }
        }
        return k;
    }
};