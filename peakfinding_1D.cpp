/* if find the peak in left and right position of the list */
/* ex 1D=>[a,b,c,d,e,f,g,h,i] if peakFind(a<=i) belongs to b>=c && b<=a */
/*straigh forward algorithsm*/
#include<iostream>
using namespace std;
int main()
{
	int size,search,i;
	cin>>size>>search;
	int arr[size+1];
	for(i=1;i<=size;i++)
	  cin>>arr[i];
    for(i=2;i<=size; )
	{
		if(arr[i-1]==search || arr[i]==search||arr[i+1]==search)
			break;
		i=i+3;
		
	}
	cout<<arr[i]<<endl;
}