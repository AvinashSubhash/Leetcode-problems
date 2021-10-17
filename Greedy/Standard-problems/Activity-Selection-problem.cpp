#include<bits/stdc++.h>
long long int int1;
using namespace std;

/*
 Activities are given with their starting and finishing time,
 select maximum number of activities that can be selected by single person,
 assuming he can work only one activity at a time.
*/

/*
    step: 1    Sort the activities according to their finishing time
    step: 2    Select the first activity
    step: 3    if start time of next activity is greater then finish time of previous,
               then select that activity.
*/ 
bool sortcol(const vector<int>& v1, vector<int>& v2)
{
    return v1[1] < v2[1];
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<int>> data;
    for(int i=0;i<n;i++)
    {
        vector<int> t;
        int num_t;
        cin>>num_t;
        t.push_back(num_t);
        cin>>num_t;
        t.push_back(num_t);
        data.push_back(t);
    }
    int result=1,prev=data[0][1];
    cout<<"Selected: "<<0<<" ";
    sort(data.begin(),data.end(),sortcol);
    for(int i=1;i<n;i++)
    {
        if (data[i][0] >= prev)
            {
                prev = data[i][1];
                cout<<i<<" ";
                result++;
            }

    }
    cout<<endl<<result<<endl;


}


int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}