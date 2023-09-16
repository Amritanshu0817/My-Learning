#include<iostream>
using namespace std;

int set(int arr[],int l,int i,int v){
	if(i>=0 && i<=l){
		arr[i]=v;
		return v;
	}
	return -1;
}
int main(){
	int arr[] ={5,7,3,11,9,6};
	cout<<"Enter the index ";
	int i;
	cin>>i;
	cout<<"Enter the value ";
	int v;
	cin>>v;
	int l = sizeof(arr)/sizeof(arr[0]);
	cout<<set(arr,l,i,v)<<" is added to the array";
}
