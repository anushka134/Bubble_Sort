#include<iostream>
using namespace std;

int main()
{
	int n;
	int srt;

	
	cout<<"Enter number of elements in array"<<endl;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	for(int j=0;j<n;j++)
	{
		for(int i=0;i<n;i++)
    	{
	        if (arr[i]>arr[i+1])
	    	{
			    srt=arr[i+1];
		    	arr[i+1]=arr[i];
		    	arr[i] = srt;
	    	}
    	}
	}
	
	cout<<" "<<endl;
	cout<<"The sorted array is : ";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}


