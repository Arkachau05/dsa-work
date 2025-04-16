// (Q)array of size N you have to delete an element from given position in array

#include <bits/stdc++.h>
using namespace std;
int search(vector<int>arr,int del_ele){
    // sort(arr.begin(), arr.end());
    int l=0;
    int h=arr.size()-1;
    while(l<=h){
      int mid=l+(h-l)/2;
        if(del_ele<arr[mid]){
            h=mid-1;
        }
        else if(del_ele>arr[mid]){
           l=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
void deleteElement(vector<int>& arr, int ele){
    int n = arr.size();
    
    for (int i = ele; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    arr.pop_back();

    cout << "Updated array: ";
    for (int i=0;i<arr.size();i++) {
        cout << arr[i] << " ";
    }
    
}
int main() {
    int n = 5;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int del_ele;
    cout<<"delete element";
    cin>>del_ele;
    sort(arr.begin(), arr.end());
    int idx=search(arr,del_ele);

   deleteElement(arr,idx);
    
}
