#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    bool check(string s,int lo, int hi, int count)
    {
        if (count > 1)
            return false;
        while (lo < hi)
        {
            if(s[lo] == s[hi])
            {
                lo++;
                hi--;
            }
            else
            {
                return check(s,lo+1,hi,count+1) || check(s,lo,hi-1,count+1);
            }
        }
        return true;
        
    }
    
    bool validPalindrome(string s) {
        int lo=0,hi=s.size()-1;
        return check(s,lo,hi,0);
    }
};