#include<iostream>
using namespace std;

void display(int arr[], int l){
	cout<<arr[0];
	for(int i=1; i<l; i++)
	{
		cout<<","<<arr[i];
	}
}

void merge(int arr1[],int arr2[],int res[],int s1,int s2){
	int i,j,k=0;
	while (i<s1 && j<s2)
	{
			if(arr1[i]<arr2[j])
			{
	        	res[k]=arr1[i];
		        i++;
		        k++;
	        }
	        else {
	            	res[k]=arr2[j];
		            j++;
		            k++;
              	}
    }
//    while(i<s1)
//    {
//    	res[k]=arr1[i];
//    	i++;
//    	k++;
//	}
//    while(i<s2)
//    {
//    	res[k]=arr2[j];
//    	j++;
//    	k++;
//	}

}
int main(){
	int arr1[]={1,3,5,7,9};
	int arr2[]={2,4,6,8,10};
	int s1=sizeof(arr1)/sizeof(arr1[0]);
	int s2=sizeof(arr2)/sizeof(arr2[0]);
	int s3=s1+s2;
	int res[s3];
	merge(arr1,arr2,res,s1,s2);
	display(res,s3);

	
	return 0;
}
