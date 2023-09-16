#include<iostream>
using namespace std;

void set(int a[], int i,int j,int x,int n)
{
	if(i==j)
	{
		a[i-1] = x;
	}	
}

void display(int a[], int i,int j,int n)
{
	for(int m=0; m<n; m++){
		for(int p=0; p<n; p++){
			if(i==j){
				cout<<a[i-1]<<" ";
			}
			else{
				cout<<"0 ";
			}
		}
		cout<<endl;
	}
}

int main(){
	int n,x,i,j;
	cout<<"Enter the order of sq matrix "<<endl;
	cin>>n;
	int *a = new int[n];
	cout<<"Enter the daigonal elements";
	for(i=0; i<n; i++){
		cin>>x;
		a[i]=x;
	}
	for(i=1; i<n; i++){
		for(j=1; j<n; j++){
			cin>>x;
			set(a,i,j,x,n);
		}
	}

	
	display(a,i,j,n);
	return 0;
}
