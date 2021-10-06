#include<bits/stdc++.h>
using namespace std;
class MinStack {
public:
            vector<int> stack1;
        vector<int> copy;
    MinStack() {
    }
    
    void push(int val) {
        stack1.push_back(val);
        copy = stack1;
        sort(copy.begin(),copy.end());
    }
    
    void pop() {
        stack1.pop_back();
        copy = stack1;
        sort(copy.begin(),copy.end());
    }
    
    int top() {
        return stack1[stack1.size()-1];
    }
    
    int getMin() {
        return copy[0];
        }
};
