#include <bits/stdc++.h>
using namespace std;
#define int long long 
vector<bool>isPrime(1e5+1,1);//globally extra space can be in the range till 1e8.
void seive()
{
    for(int i=2;i*i<=1e5;i++)
    {
        if(isPrime[i]==true)
        {
            for(int j=i*i;j<=1e5;j+=i)
            {
                isPrime[j]=false;
            }
        }
    }
}
signed main()
{
    seive();
    int _t=1;
    cin>>_t;
    while(_t--)
    {
       int n;
       cin>>n;
       if(isPrime[n])
        cout<<1<<endl;
       else
        cout<<0<<endl;
    }
}
