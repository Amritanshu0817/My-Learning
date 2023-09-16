// Binary search only works when the array is sorted

#include<iostream>
#include<stdio.h>

using namespace std;

int find(int arr[],int l,int h,int k,int s){
	for(int i=0; i<s; i++){
	int m = (l+h)/2;
	if (arr[m]==k){
		return m;
	}
	else if(arr[m]>k){
		h=m-1;
	}
	else {
		l=m+1;
	}
	
}
return -1;
}

int main(){
	int arr[] = {1,2,3,5,7,9,11,15,16,18,20,22,24,25,28,30,31,36,72};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout<<find(arr,0,n,99,n)<<" index";
	return 0;
}
