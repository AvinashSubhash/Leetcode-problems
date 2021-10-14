#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> data;
        map<char,int>::iterator it;
        int unique_count=0,picks=0;
        for(int i=0;i<s.size();i++)
        {
            data[s[i]]++;
        }
        for(it=data.begin();it!=data.end();it++)
        {
            if (it->second > 1)
            {
                picks+= (it->second-(it->second%2));
                unique_count += it->second%2;
                   
            }
            else
                unique_count++;
        }
        if (unique_count>0)
            return picks+1;
        return picks;
    }
};