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
        return data[n-1]+data[n-2];
    }
    int fib(int n) {
    if (n==1 || n==0)
    return n;
    int data[n];
    memset(data,-1,sizeof(data));
    data[0]=0;data[1]=1;
    return Calculate(n,data);
    }
};