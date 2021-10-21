#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(s.begin(),s.end(),greater<int>());
        sort(g.begin(),g.end(),greater<int>());
        int count=0;
        for(int i=0;i<g.size();i++)
        {
            if (s.size()==0)
                break;
            auto j = s.begin();
            for(j=s.begin();j!=s.end();j++)
            {
                if (*j<g[i])
                    break;
            }
            if (j!=s.begin())
            {
                count++;
                s.erase(j-1);
            }
        }
        return count;
    }
};