#include<bits/stdc++.h>
long long int int1;
using namespace std;

void solve(int num1,int num2)
{
    if(num1==0 || num2==0)
    return;
    if(num2%num1==0)
    {
        cout<<"1/"<<num2/num1<<" + ";
        return;
    }
    if(num1%num2==0)
    {
        cout<<num1/num2<<endl;
        return;
    }
    if(num1>num2)
    {
        cout<<num1/num2<<" + ";
        solve(num1%num2,num2);
        return;
    }
    int n=num2/num1 + 1; // ceil calculation
    cout<<"1/"<<n<<" + ";
    solve(num1*n-num2,num2*n);     //(a/b - c/d) => (a*d-c)/(b*d)
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {

    int num1,num2;
    cin >> num1>>num2;
        solve(num1,num2);
    }
}