class Solution {
    public:
        int findKthLargest(vector<int>& nums, int k) {
           return kthvalue(nums,0,nums.size()-1,k);
        }
     int returnindex(vector<int>&nums,int l,int r){
    
     int pivotNew = l + rand() % (r - l + 1);
            swap(nums[pivotNew], nums[r]);
    
         int pivot=nums[r];
         int i=l;
         int j=r;
         while(j>i){
             if(nums[i]>pivot){
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
        if(k>0 ){
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
    };
    //quickselect