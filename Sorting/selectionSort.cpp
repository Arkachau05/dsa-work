#include<bits/stdc++.h>
using namespace std ;
int main(){
    vector<int> arr={4,5,3,6,7,2,1,4,5,6,3,8,2,9,6};
    int n =arr.size();

for(int i=0;i<n-1;i++){
    int min=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
            
            min=j;
        }
    }
    swap(arr[i],arr[min]);
}
    for (int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
   
}
//take the ith pace as min 
//then check which element are less than it 
//then put the idx in the min value 
//then swap the ith with the min value out side the loop 
