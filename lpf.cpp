#include<bits/stdc++.h> 
using namespace std;
#define lli long long 
class Solution{
public:
    bool isprime(int n)
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
                return false;
        }
        return true;
    }
public: 
    long long int largestPrimeFactor(int n){
    int lpf=0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(isprime(i))
            {
                lpf=max(lpf,i);//factor 1
            }
            if(isprime(n/i))//i ke corresponding doosra factor or factor 2
            {
                lpf=max(lpf,n/i);
            }
        }
    }
    if(lpf==0)
    lpf=n;//prime no hi h vo
    return lpf;
    }
};
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}