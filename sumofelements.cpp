#include<iostream>
using namespace std;

int sum(int arr[],int l)
{
	int sum=0;
	for(int i=0;i<l;i++)
	{
		sum = sum+arr[i];
	}
	return sum;
}
int main(){
	int arr [] = {10,20,6,4,13,2,6,77,1,0,9,95};
	int l = sizeof(arr)/sizeof(arr[0]);
	cout<<"The sum of the elements is "<<sum(arr,l);
	
	return 0;
}
