#include<iostream>
using namespace std;

int EuclideanGCD(int a,int b)
{
	return b==0?a:EuclideanGCD(b,a%b);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<EuclideanGCD(a,b)<<endl;
	return 0;
	
}