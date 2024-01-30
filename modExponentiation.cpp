// Calculate (a^(b^c))%p

#include<bits/stdc++.h>
using namespace std;
#define int long long 
int modularBinPower(int a, int b, int p)
{
    int ans=1;
    while(b>0)
    {
    if(b%2!=0)
    {
        ans=(ans*a)%(p);
        b--;
    }
    else
    {
        a=(a*a)%(p);
        b/=2;
    }
    }
    return ans;
}
signed main()
{
    int _t=1;
    //cin>>_t;
    while(_t--)
    {
    int a,b,c,p;
    cin>>a>>b>>c>>p;
    cout<<modularBinPower(a,modularBinPower(b,c,p-1),p)<<endl;
    }
}