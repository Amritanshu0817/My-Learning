#include<iostream>
using namespace std;


void rev(int arr[],int l){

	int *p;
	p = new int[l];

	for(int i=l-1,j=0; i>=0;i--,j++)
	{
		p[j]=arr[i];
	}

	for(int k=0; k<l; k++)
	{
		arr[k]=p[k];
	}

	delete []p;

}

void dis(int arr[], int l){

	for(int i=0; i<l; i++)
		cout<<arr[i]<<",";

}
int main(){
	int arr [] = {9,8,7,6,5,4,3,2,1};
	int l = sizeof(arr)/sizeof(arr[0]);
	rev(arr,l);
    dis(arr,l);
	
	return 0;
}
