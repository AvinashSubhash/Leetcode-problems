#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    int MaxSubArray(vector<vector<int>>& data,vector<vector<int>>& flag,vector<int>& nums,int i,int j)
    {
        int sum1=0;
        if (i==j)
            sum1=data[i][j];
        else if (i > j || i==(nums.size()-1) || j >=(nums.size()))
            return INT_MIN;
        int x=i;
        while (true)
        {
            if (x > j)
                break;
            else if (x==j)
            {
                sum1 += nums[x];
                x++;
            }
            else if( flag[x][j] == 1)
            {
                sum1 += data[x][j];
                break;
            }
            else
            {
                sum1 += nums[x];
                x++;
            }
        }
        if (flag[i][j]!=0)
        {
            flag[i][j]=1;
            data[i][j]=sum1;
        }
        return max(sum1,max(MaxSubArray(data,flag,nums,i+1,j),MaxSubArray(data,flag,nums,i,j+1)));
    }
    
    
    int maxSubArray(vector<int>& nums) {
        vector<vector<int>> data(nums.size(),vector<int> (nums.size()));
        vector<vector<int>> flag(nums.size(),vector<int> (nums.size(),0));
        if (nums.size()==1)
            return nums[0];
        return  MaxSubArray(data,flag,nums,0,0);
        
    }
};