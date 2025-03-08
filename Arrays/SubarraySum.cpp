//kadanes

#include<bits/stdc++.h>
using namespace std ;


int maxSubArray(vector<int>& nums) {
    int currsum=0;int maxsum=INT_MIN;
    
    for(int i=0;i<nums.size();i++){
       currsum+=nums[i];
        if(maxsum<currsum){
            maxsum=currsum;
        }
        if(currsum<0){
            currsum=0;
        }
        
    }

return maxsum;
}
int main(){
    vector<int>arr={-1,-5,6,4,-8,5,2,1,3,7};
    int size =arr.size();
    cout<<maxSubArray(arr)<<" ";
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<",";
    }
}