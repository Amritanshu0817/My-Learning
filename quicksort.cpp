#include<iostream>

using namespace std;

 int index(int arr[], int s, int e){
    int pivot = arr[s];
    int cnt = 0;
    for(int i = s+1; i<=e; i++)
    {
        if(arr[i]<=pivot)
        cnt++;
    }
    
    int position = s + cnt;
    swap(arr[position], arr[s]);
    
    int i = s, j = e;
    while(i < position && j > position)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }
        while(arr[j] > pivot)
        {
            j--;
        }
        if(i < position && j > position)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return position;
}

void sort(int arr[], int s, int e)
{
    if(s >= e)
    return;
    
    int p = index(arr, s, e);
    
    sort(arr, s, p-1); 
    sort(arr, p+1, e);

}
int main(){
    int arr[8] = {6,6,-6, -2, -4, -6, 2, -6};
    int n = 8;
    sort(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
