#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack1;
        for (int i=0;i<s.size();i++)
        {
        if (s[i]=='{' || s[i]=='(' || s[i]=='[')
            stack1.push(s[i]);
        else if (s[i]=='}')
        {
            if(stack1.empty() || stack1.top()!='{')
                return false;
            else
                stack1.pop();
        }
            else if (s[i]==']')
        {
            if(stack1.empty() || stack1.top()!='[')
                return false;
            else
                stack1.pop();
        }
            else if (s[i]==')')
        {
            if(stack1.empty() || stack1.top()!='(')
                return false;
            else
                stack1.pop();
        }
    }
        if (stack1.empty())
            return true;
        return false;
    }
};