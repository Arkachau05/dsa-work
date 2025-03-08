#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    //Moore 
    int count=0;
    int majorityElement=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=majorityElement){
            count--;
        }
        else {
            count++;
        }
        if(count<=0){
            majorityElement=nums[i];
            count =1;
        }
    }
    int count2=0;
    for(int i=0;i<nums.size();i++){
        if(majorityElement==nums[i]){
            count2++;
        }
    }
    if(count2>(nums.size()/2)){
        return majorityElement;
    }
    else{
        return -1;
    }
}

int main() {
    vector<int> arr = {4, 5, 3, 6, 7, 2, 1, 4, 5, 6, 3, 8, 2, 9, 6};
    int n = majorityElement(arr);
    cout << n << endl;
}
