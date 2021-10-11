#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximum69Number (int num) {
        vector<int> data_list;
        int point;
        while(num)
        {
            point = num%10;
            data_list.push_back(point);
            num = num/10;
        }
        for(int i=data_list.size()-1;i>=0;i--)
        {
            if (data_list[i]==6)
            {
                data_list[i]=9;
                break;
            }
        }
        num=0;
        for(int i=data_list.size()-1;i>=0;i--)
        {
            num = num*10+data_list[i];
        }
        return num;
    }
};