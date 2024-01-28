#include<bits/stdc++.h>
using namespace std;
int binPower(int a, int b)
{
    int ans=1;
    while(b>0)
    {
    if(b%2!=0)
    {
        ans=ans*a;
        b--;
    }
    else
    {
        a=a*a;
        b/=2;
    }
    }
    return ans;
}
int main()
{
    int _t=1;
    cin>>_t;
    while(_t--)
    {
    int a,b;
    cin>>a>>b;
    cout<<binPower(a,b)<<endl;
    }
}