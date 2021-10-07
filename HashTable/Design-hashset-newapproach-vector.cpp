#include<bits/stdc++.h>
using namespace std;
class MyHashSet {
public:
    vector<int> data1;
        
    MyHashSet() {
    }
    
    void add(int key) {
        if (find(data1.begin(),data1.end(),key)==data1.end())
            data1.push_back(key);
    }
    
    void remove(int key) {
        if (find(data1.begin(),data1.end(),key)!=data1.end())
        {
            int pos = find(data1.begin(),data1.end(),key) - data1.begin();
            data1.erase(data1.begin()+pos);
    }
    }
    
    bool contains(int key) {
       if( find(data1.begin(),data1.end(),key)!=data1.end())
           return true;
        else
            return false;
    }
};