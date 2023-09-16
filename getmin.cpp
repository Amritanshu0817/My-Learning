#include<iostream>
using namespace std;

int min(int arr[],int l)
{
	int one=arr[0];
	for(int i=0;i<l;i++)
	{
		if(arr[i]<one)
		{
			one = arr[i];
		}
	}
	return one;
}
int main(){
	int arr [] = {10,20,6,4,13,2,6,77,9,95,1};
	int l = sizeof(arr)/sizeof(arr[0]);
	cout<<min(arr,l);
	
	
	return 0;
}
