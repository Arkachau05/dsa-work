 #include<bits/stdc++.h>
using namespace std ;
void merge(vector<int>&arr, int left, 
    int mid, int right){
        int n1 = mid - left + 1;
    int n2 = right - mid;
    //create 2 vectors
    vector<int> L(n1), R(n2);
    //putting original values inside them 
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

        int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back 
    // into arr[left..right]
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
        // Copy the remaining elements of L[], 
    // if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], 
    // if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }


}
void mergesort(vector<int>&arr,int s,int e){
    int mid=s+(e-s)/2;
if(s>=e){
    return;
}
mergesort(arr,s,mid);
mergesort(arr,mid+1,e);
merge(arr,s,mid,e);
}
int main(){
    vector<int> arr={4,5,3,6,7,2,1,4,5,6,3,8,2,9,6};
    int n =arr.size();
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
}

//merge sort
//divide and conquer
//diver until 1 element is left
// then merge the elements and sort them
