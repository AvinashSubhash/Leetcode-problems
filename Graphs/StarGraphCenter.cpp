#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int flag,num=0;
        for(int i=0;i<edges[0].size();i++)
        {
            flag=0;
            for (int j=1;j<edges.size();j++)
            {
                if (edges[0][i]!= edges[j][0] && edges[0][i]!= edges[j][1])
                    flag=1;
            }
            if (flag == 0)
                num = edges[0][i];
        }
        return num;
    }
};