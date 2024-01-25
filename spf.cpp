#include <bits/stdc++.h>
using namespace std;
#define int long long 
vector<int>spf(1e5+1,0);//globally extra space can be in the range till 1e8.
void isprime()
{
    for(int i=1;i<=1e5;i++)
     spf[i]=i;
    for(int i=2;i*i<=1e5;i++)
    {
        if(spf[i]==i)
        {
            for(int j=i*i;j<=1e5;j+=i)
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
    //cin>>_t;
    while(_t--)
    {
       int n;
       cin>>n;  
       cout<<spf[n]<<endl;
    }
    return 0;
}
