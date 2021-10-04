#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int max(int a, int b)
    {
        return a>b?a:b;
    }
    int min(int a,int b)
    {
        return a<b?a:b;
    }
    int minTimeToType(string word) {
        int count=0;
        char str = 'a';
        for(int i=0;i<word.size();i++)
        {
            count += min(max((int)word[i],(int)str) - min((int)word[i],(int)str),26 - max((int)word[i],(int)str)+ min((int)word[i],(int)str)) + 1;
            str = word[i];
            cout<<count<<endl;
        }
        return count;
    }
};