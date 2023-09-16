#include<stdio.h>
#include<iostream>

using namespace std;

int find(int arr[], int l, int k){
	for(int i=0; i<l; i++){
	if(arr[i]==k)
	return i;
}
return -1;
}

int main()
{
	int k;
	int arr[] = {10,15,21,7,6,3,11};
	int s = sizeof(arr)/sizeof(arr[0]);
	cout<<"Enter the key"<<endl;
	cin>>k;
	cout<<find(arr, s, k)<<" is the index";
	return 0;
}
