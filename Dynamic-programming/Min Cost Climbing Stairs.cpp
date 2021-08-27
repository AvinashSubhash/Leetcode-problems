#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int Min(int a,int b)
    {
        return a>b?b:a;
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[cost.size()];
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i=2;i<cost.size();i++)
        {
            dp[i] = Min(dp[i-1],dp[i-2])+cost[i];
        }
        return Min(dp[cost.size()-1],dp[cost.size()-2]);
    }
};