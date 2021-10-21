#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int parts=0,sum_t=0,flag=0;
        int sum1 = accumulate(begin(arr),end(arr),0);
        cout<<sum1<<endl;
        if (sum1%3!=0)
            return false;
        
        for(int i=0;i<arr.size();i++)
        {
            sum_t += arr[i];
            if (sum_t==(sum1/3))
            {
                //cout<<sum_t<<" : "<<i<<endl;
                parts++;
                sum_t=0;
            }
            if (parts >=2 && i < arr.size()-1)
            {
                flag=1;
                break;
            }
            //cout<<sum_t<<endl;
        }
        return flag == 1;
    }
};