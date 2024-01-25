#include<bits/stdc++.h>
using namespace std;
vector<int>getAllDivisors(int n)
{
    vector<int>v;
    v.push_back(1);
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(n/i!=i) // i ke corresponding vala
                v.push_back(n/i);
        }

    }
    v.push_back(n);
    return v;
}
int main()
{
    int n;
    cin>>n;
    vector<int>allDivisors = getAllDivisors(n);
    for(auto val:allDivisors)
    {
        cout<<val<<" ";
    }
    return 0;
}