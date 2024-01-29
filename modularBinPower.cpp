#include<bits/stdc++.h>
using namespace std;
#define int long long 
int modBinPower(int a, int b, int m)
{
    int ans=1;
    while(b>0)
    {
    if(b%2!=0)
    {
        ans=(ans*a)%(m);
        b--;
    }
    else
    {
        a=(a*a)%(m);
        b/=2;
    }
    }
    return ans;
}
signed main()
{
    int _t=1;
    cin>>_t;
    while(_t--)
    {
    int a,b;
    cin>>a>>b;
    cout<<modBinPower(a,b,(1e9+7))<<endl;
    }
}