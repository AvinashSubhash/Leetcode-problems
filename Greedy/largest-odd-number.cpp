#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string largestOddNumber(string num) {
        int i = num.size()-1;
        while(i>=0){
            if ((int)num[i] %2 !=0)
            break;
            i--;
        }
        if (i==-1)
            return "";
        return num.substr(0,i+1);
    }
};