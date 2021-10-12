#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    
    static bool sortcol( const vector<int>& v1,
        const vector<int>& v2 ) {
        return v1[1] > v2[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int count=0;
            sort(boxTypes.begin(),boxTypes.end(),sortcol);
            count=0;
            for(int i=0;i<boxTypes.size();i++)
            {
                if (truckSize==0)
                    break;
                else if (truckSize >= boxTypes[i][0])
                {
                    count += (boxTypes[i][0]*boxTypes[i][1]);
                    cout<<count<<endl;
                    truckSize -= boxTypes[i][0];
                }   
                else
                {
                    count += (boxTypes[i][1]*truckSize);
                    cout<<count<<endl;
                    break;
                }
            }
        return count;
    }
};