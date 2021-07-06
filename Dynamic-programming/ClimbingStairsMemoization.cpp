#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    int CalculateTotal(int i,int n,int data[])
    {
        if (i>n)
            return 0;
        
        if (i==n)
            return 1;
        
        if (data[i] != -1)
            return data[i];
        
        data[i] = CalculateTotal(i+1,n,data) + CalculateTotal(i+2,n,data);
        return data[i];
    }
    
    int climbStairs(int n) {
        
        int data[n+1];
        memset(data,-1,sizeof(data));
        return CalculateTotal(0,n,data);
    }
};