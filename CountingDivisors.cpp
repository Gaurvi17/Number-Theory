// Given n integers, your task is to report for each integer the number of its divisors.
// For example, if x=18, the correct answer is 6 because its divisors are 1,2,3,6,9,18.
// COUNTING DIVISORS PROBLEM --> CSES PROBLEMSET.

#include <bits/stdc++.h>
using namespace std;
#define int long long 
vector<int>spf(1e6+1,0);//globally extra space can be in the range till 1e8.
void isprime()
{
    for(int i=1;i<=1e6;i++)
     spf[i]=i;
    for(int i=2;i*i<=1e6;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=1e6;j+=i)
            {
                if(spf[j]==j)
                spf[j]=i;
            }
        }
    }
}
signed main()
{
    isprime();
    int _t=1;
    cin>>_t;
    while(_t--)
    {
       int n,count=1;
       cin>>n;  
       unordered_map<int,int>mp;
       while(n>1)
       {
        mp[spf[n]]++;
        n/=spf[n];
       }
       for(auto val:mp)
        count=(count*(val.second+1));
       cout<<count<<endl;
    }
    return 0;
}