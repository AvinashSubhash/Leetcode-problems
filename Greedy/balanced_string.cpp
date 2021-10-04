#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int balancedStringSplit(string s) {
        int point=0,count=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                point++;
            else if(s[i]=='L')
                point--;
            if(point==0)
                count++;
        }
        return count;
        
    }
};