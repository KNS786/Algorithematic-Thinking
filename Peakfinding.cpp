/*this is for divide and conquer approch*/
#include<iostream>
using namespace std;

int peakFind(int arr[],int key,int size)
{
	int mid=size/2;
	if(key==arr[mid] || size==0)
	  return arr[mid];
	if(key<arr[mid])
	   peakFind(arr,key,mid--);
    else
		peakFind(arr,key,mid++);
	
}

int peakFindIterative(int arr[],int key,int size)
{
	if(size==0)
		return 0;
	int mid=size/2;
	if(key==arr[mid])
		return arr[mid];
	if(key < arr[mid])
	{
		for(int i=1;i<=mid;i++)
			if(arr[i]==key)
				return arr[i]; 
	    return -1;		
	}
	if(key > arr[mid])
	{
		for(int i=mid+1;i<=size;i++)
			if(arr[i]==key)
				return arr[i];
		return -1;
	}
}
int main()
{
	/*this works on sorted array*/
	int size,search;
	cin>>size>>search;
    int arr[size+1];
	for(int i=1;i<=size;i++)
		cin>>arr[i];
	cout<<"Recurive solution : "<<endl;
	peakFind(arr,size,search);
	cout<<"iteration solution : "<<endl;
	peakFindIterative(arr,size,search);
	return 0;
}


