#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag)
        cout<<"not prime"<<endl;
    else
        cout<<"prime"<<endl;
    return 0;
}
