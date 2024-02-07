#include<bits/stdc++.h>
using namespace std;
void primedivisors(int n)
{
       int count;
       for(int i=2;i*i<=n;i++)
       {
        count=0;
        while(n%i==0)
        {
            n/=i;
            count++;
        }
        if(count>0)
        cout<<i<<"->"<<count<<endl;
       }
       count=0;
       if(n!=1)
       {
       count++;
       cout<<n<<"->"<<count<<endl;
        }
}
int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       primedivisors(n);
       cout<<endl;
    }
    return 0;
}