#include<bits/stdc++.h>
using namespace std;
#define int long long 
int gcdCalc(int a, int b)
{
    int ans;
    if(b==0)
        return a;
    ans=gcdCalc(b,a%b);
    return ans;
}
int lcmCalc(int a, int b)
{
    int ans2=gcdCalc(a,b);
    return ((a*b)/(ans2));
}
signed main()
{
    int _t=1;
    //cin>>_t;
    while(_t--)
    {
    int a,b;
    cin>>a>>b;
    cout<<gcdCalc(a,b)<<endl;
    cout<<lcmCalc(a,b)<<endl;
    }
}