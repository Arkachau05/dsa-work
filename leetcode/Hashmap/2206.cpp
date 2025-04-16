class Solution {
    public:
        bool divideArray(vector<int>& nums) {
            unordered_map<int, int>myMap;
            for(int i=0;i<nums.size();i++){
                if(myMap.find(nums[i])!=myMap.end()){
                    // myMap.insert({nums[i],myMap.key(nums[i])+1});
                    myMap[nums[i]]+=1;
                }
                else{
                    myMap[nums[i]]=1;
                }
            }
              for (const auto pair : myMap) {
            if(pair.second%2!=0){
                return false;
            }
        }
    
    return true;
        
        }
    };
    //myMAp.end() => last element (Hshmap return last element if not found )