#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int min1 = prices[0];
        int max1=0;
        for(int i=0;i<n;i++)
        {
            if (prices[i] < min1)
                min1 = prices[i];
            
            else if (prices[i]- min1 > max1)
                max1 = prices[i] - min1;
            
        }
        return max1;
    }
};