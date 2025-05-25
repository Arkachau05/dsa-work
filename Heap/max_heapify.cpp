//https://gist.github.com/Arkachau05/b2b7334c95aa7a887cdfddf7a1161d78
#include<bits/stdc++.h>
using namespace std;
void Max_Heapify(vector<int>&arr, int index){
int left=2*index+1;
int right=2*index+2;//left right 2 nodes 
int largest=index;//suppose taking largest as index
if(left<arr.size()&&arr[left]>arr[largest]){//also checking the boundary condition
    largest=left;//if left is greater than largest then assign left to largest
}
if(right<arr.size()&&arr[right]>arr[largest]){//also checking the boundary condition
    largest=right;//if left is greater than largest then assign right to largest
}
if(largest!=index){//if largest is not equal to index then swap the values
    swap(arr[index],arr[largest]);//swap the values of index and largest
    Max_Heapify(arr,largest);//call the function recursively for largest
}
else{
    return;//if largest is equal to index then returnnn
}
}
int main(){
    vector<int>arr;
    arr={1, 1, 2, 3, 4, 5, 6};
    int index=0;
    // for (int i = arr.size() ; i >= 0; i--) {
    //     Max_Heapify(arr, i);
    // }
    for (int i = arr.size() / 2 - 1; i >= 0; i--) {//more optimized
        Max_Heapify(arr, i);
    }
    
    
    cout<<"Max Heapify: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}