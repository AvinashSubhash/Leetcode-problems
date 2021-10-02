#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    int Calculate(int n,int data[])
    {
        if (data[n-1]==-1)
            data[n-1] = Calculate(n-1,data);
        if (data[n-2]==-1)
            data[n-2] = Calculate(n-2,data);
        if (data[n-3]==-1)
            data[n-3] = Calculate(n-3,data);
        
        return data[n-1]+data[n-2]+data[n-3];
    }
    int tribonacci(int n) {
    if (n==0 || n==1)
        return n;
    if (n==2)
        return 1;
    int data[n];
    memset(data,-1,sizeof(data));
    data[0]=0;data[1]=1;data[2]=1;
    return Calculate(n,data);
    }
};