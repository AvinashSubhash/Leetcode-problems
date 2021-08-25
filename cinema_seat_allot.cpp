#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
     
        int data[n][10];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<10;j++)
                data[i][j]=0;
        }
        for(int i=0;i<reservedSeats.size();i++)
            data[reservedSeats[i][0]-1][reservedSeats[i][1]-1] = 1;
        int count=0;
        for(int i=0;i<n;i++)
        {
                int middle_m=0;
                if (data[i][1]==0 && data[i][2]==0)
                {
                    if (data[i][3]==0 && data[i][4]==0)
                    {
                        count++;
                        middle_m=1;
                    }
                }
                if (data[i][7]==0 && data[i][8]==0)
                {
                    if (data[i][5]==0 && data[i][6]==0)
                    {   
                            count++;
                            middle_m=1;
                    }
                }
                if (middle_m == 0)
                {
                    if (data[i][3]==0 && data[i][4]==0 && data[i][5]==0 && data[i][6]==0)
                        count++;
                }
        }
        return count;
    }
};