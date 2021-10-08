#include<bits/stdc++.h>
using namespace std;
class MyHashMap {
public:
    vector<int> value;
    vector<int> keys;
    MyHashMap() {
        
    }
    
    void put(int key, int valu) {
        if (find(keys.begin(),keys.end(),key)==keys.end())
        {
            value.push_back(valu);
            keys.push_back(key);
        }
        else
        {
            int pos = find(keys.begin(),keys.end(),key) - keys.begin();
            value[pos] = valu;
        }
    }
    
    int get(int key) {
      if (find(keys.begin(),keys.end(),key)==keys.end())
          return -1;
        else
        {
            for(int i=0;i<keys.size();i++)
                if (keys[i]==key)
                return value[i];
        }
        return -1;
    }
    
    void remove(int key) {
        if (find(keys.begin(),keys.end(),key)!=keys.end())
        {
            int pos = find(keys.begin(),keys.end(),key) - keys.begin();
            keys.erase(keys.begin()+pos);
            value.erase(value.begin()+pos);
        }
    }
};