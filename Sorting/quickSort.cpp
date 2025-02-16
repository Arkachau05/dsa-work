#include<bits/stdc++.h>
using namespace std ;
void quicksort(int arr[],int h,int l){
    if(l>=h){
        return ;
    }
    int i=l;int j=h; int pivot=arr[h];
    while(i<j){
         if(arr[i]<pivot){
            i++;
         }
         else {
            j--;
            swap(arr[i],arr[j]);
         }
         //check the last with the first i j 
    }
    swap(arr[i],arr[h]);
    quicksort(arr,i-1,l);
    quicksort(arr,h,i+1);
    }

int main(){
    int arr[]={4,5,3,6,7,2,1,4,5,6,3,8,2,9,6};
    int size =sizeof(arr)/sizeof(arr[0]);
    quicksort(arr, size, 0);
    cout<<"done";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}
//take the last element as pivot and put it in the correct position