#include<iostream>
using namespace std;

int max(int arr[],int l)
{
	int one=arr[0];
	for(int i=0;i<l;i++)
	{
		if(arr[i]>one)
		{
			one = arr[i];
		}
	}
	return one;
}
int main(){
	int arr [] = {10,20,6,4,13,2,6,77,1,0,9,95};
	int l = sizeof(arr)/sizeof(arr[0]);
	cout<<max(arr,l);
	
	
	return 0;
}
