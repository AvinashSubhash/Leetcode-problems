#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int a=1,b=1,count=nums.size(),t,point=0;
        if (nums.size()==0 || nums.size()==1)
            return nums.size();
        for(int i=1;i<nums.size();i++)
        {
            if (nums[i]==nums[i-1])
            {
                t = nums[i];
                //cout<<t<<endl;
                nums.erase(nums.begin()+i-1);
                i--;
                //nums.insert(nums.begin()+point,t);
                count--;
                //point++;
            }
        }
        //cout<<"*"<<endl;
        return count;
    }
};