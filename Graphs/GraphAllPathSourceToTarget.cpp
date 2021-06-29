#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> result1;
    void Traverse(vector<vector<int>>& graph,int num,vector<int> result)
    {
        if (num == graph.size()-1)
        {
            //esult.push_back(graph.size()-1);
            result1.push_back(result) ;
        }
            
        else if (graph[num].size() == 0)
            return ;
        for(int i=0;i<graph[num].size();i++)
        {
            vector<int> temp = result;
            temp.push_back(graph[num][i]);
            Traverse(graph,graph[num][i],temp);
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
    for(int i=0;i<graph[0].size();i++)
    {
        vector<int> num;
        num.push_back(0);
        num.push_back(graph[0][i]);
        //cout<<0<<"->"<<graph[0][i];
        Traverse(graph,graph[0][i],num);
    }
      return result1;  
    }
};