#include<iostream>
using namespace std;

int get(int arr[],int l,int i){
	if(i>=0 && i<=l){
		return arr[i];
	}
	return -1;
}
int main(){
	int arr[] ={5,7,3,11,9,6};
	cout<<"Enter the index ";
	int i;
	cin>>i;
	int l = sizeof(arr)/sizeof(arr[0]);
	cout<<get(arr,l,i);
}
