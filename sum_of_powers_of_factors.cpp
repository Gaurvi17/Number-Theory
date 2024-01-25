// Given a and b, determine the sum of all the points that will be awarded to the participants 
// with ticket numbers between a and b (inclusive).For instance, if points are to be awarded to a participant 
// with ticket number 12, the amount of points given out will be equal to the sum of powers in the prime factorization 
// of 12 (22 × 31), which will be 2 + 1 = 3.

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int isprime(int n)
    {
       int count=0;
       for(int i=2;i*i<=n;i++)
       {
        while(n%i==0)
        {
            n/=i;
            count++;
        }
       }
       if(n!=1)
       count++;
       return count;
    }
public:
	int sumOfPowers(int a, int b){
	    int count=0;
	    for(int i=a;i<=b;i++)
	    {
	        count+=isprime(i);
	    }
	    return count;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--)
    {
		int a, b;
		cin >>a>>b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<endl;
	}
	return 0;
}