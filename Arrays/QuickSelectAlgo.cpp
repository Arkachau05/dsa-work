//kth smallest element in an array

// Standard partition process of QuickSort.
// It considers the last element as pivot
// and moves all smaller elements to the left of
// it and greater elements to the right.
#include<bits/stdc++.h>
using namespace std ;
// int partition(vector<int>& arr, int l, int r) {
//     int x = arr[r], i = l;
//     for (int j = l; j <= r - 1; j++) {
//         if (arr[j] <= x) {
//             swap(arr[i], arr[j]);
//             i++;
//         }
//     }
//     swap(arr[i], arr[r]);
//     return i;
// }
// int kthSmallest(vector<int>& arr, int l, int r, int k) {
//     if (k > 0 && k <= r - l + 1) {//checking k is a valid number 
//         int index = partition(arr, l, r);//finding the index iniiiallly

//         if (index - l == k - 1)//return the 
//             return arr[index];

//         if (index - l > k - 1)
//             return kthSmallest(arr, l, index - 1, k);

//         return kthSmallest(arr, index + 1, r, k - index + l - 1);
//     }
//     return -1;
// }






 int returnindex(vector<int>&nums,int l,int r){

     int pivot=nums[r];
     int i=l;
     int j=r;
     while(j>i){
         if(nums[i]<pivot){
             i++;
         }
         else {
             j--;
             swap(nums[i],nums[j]);
         }
     }
     swap(nums[i],nums[r]);
     return i;
 }
 int kthvalue(vector<int>&nums,int l,int r,int k){
    if(k>0){
     int idx= returnindex(nums,l,r);
     if(idx==k-1){
      return nums[idx];
     }
     else if(idx>k-1){
        return kthvalue(nums,l,idx-1,k);
     }
     else{
        return kthvalue(nums,idx+1,r,k);
     }
    }
    return -1;
}
 int main(){
    vector<int>arr={6,4,5,2,1,3,7};
    int size =arr.size();
    int k=3;
    cout<<kthvalue(arr,0,size-1,k)<<" ";
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}