#include<iostream>
using namespace std;
int sumofminmax(int arr[], int n){

    int min = arr[0];

    for(int i=1; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    int max = arr[0];

    for(int j=1; j<n; j++){
        if(arr[j] > max){
            max = arr[j];
        }
    }

    return (min+max);
}
int main(){
    int arr[7] = {10, 12, 7, 500, -1, -45, 32};
    int n = 7;
    cout<<sumofminmax(arr,7);
    return 0;
}
