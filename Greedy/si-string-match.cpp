#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> diStringMatch(string s) {
        int low=0,high;
        high = s.size();
        vector<int> nums;
        for (int i=0;i<=s.size();i++)
        {
            if (s[i]=='I')
            nums.push_back(low++);
            else
            nums.push_back(high--);
        }
        return nums;
        
        
    }
};