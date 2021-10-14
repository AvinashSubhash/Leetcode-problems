#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a,b,c,size=nums.size();
        while (nums.size() > 2)
        {
            a = nums.back();
            nums.pop_back();
            b = nums.back();
            nums.pop_back();
            c = nums.back();
            nums.pop_back();
            if ((b+c)>a)
            {
                cout<<a<<b<<c<<endl;
                return a+b+c;
            }
            else
            {
                nums.push_back(c);
                nums.push_back(b);
            }
        }
        return 0;
    }
};