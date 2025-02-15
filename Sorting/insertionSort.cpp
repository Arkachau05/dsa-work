#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> arr={4,5,3,6,7,2,1,4,5,6,3,8,2,9,6};
    int n =arr.size();
    int i =arr.size()-1;


    for(int i=0;i<n;i++){
while(i>0 && arr[i]<arr[i-1]){
    swap(arr[i],arr[i-1]);
    i--;
}
}
    for (int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
   
}