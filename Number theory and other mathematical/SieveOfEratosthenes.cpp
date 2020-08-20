/* time complexity  O(log(log(n))) */
#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	bool primses[n+1];
	memset(primses,true,sizeof(primses));
	for(int i=2;i*i<=n;i++)
	{
		if(primses[i])
			for(int j=i*i;j<=n;j+=i)
				primses[j]=false;
	}
	for(int i=2;i<=n;i++)
	  if(primes[i])
		  cout<<i<<" ";
	return 0;
}