#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> data(n+1);
        data[0]=0;
        for (int i=1;i<=n;i++)
        {
            data[i] = data[i&(i-1)]+1;
        }
        return data;
    }
};