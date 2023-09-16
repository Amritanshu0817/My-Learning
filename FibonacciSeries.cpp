#include<iostream>
using namespace std;

int main(){

    int a=0, b=1, n, s;
    cout<<"Enter the number for Fibonaaci series"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0; i<n; i++){
        s = a+b;
        cout<<s<<" ";
        a = b;
        b = s;
    }

    return 0;
    
}