#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int MaxSubArray(int **data,int **flag,vector<int>& nums,int i,int j)
    {
        if (i > j || i==(nums.size()-1) || j >=(nums.size()))
            return 0;
        int x=i,sum1=0;
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
        int data[nums.size()][nums.size()];
        int flag[nums.size()][nums.size()];
        memset(flag,0,sizeof(flag));
        
        
        return  MaxSubArray(data,flag,nums,0,0);
    }
};