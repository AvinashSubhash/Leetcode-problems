#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
    vector<int> ans, vis(n,0);
        for(auto x: edges) vis[x[1]]=1;
        for(int i=0;i<n;i++) if(vis[i]==0) ans.push_back(i);
        return ans;
    }
    
};