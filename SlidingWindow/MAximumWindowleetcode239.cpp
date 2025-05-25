class Solution {
    public:
        vector<int> maxSlidingWindow(vector<int>& nums, int k) {
            vector<int> arr;
            int n = nums.size();
    
            for (int i = 0; i <= n - k; i++) {
                int maxval = INT_MIN;
                for (int j = i; j < i + k; j++) {
                    if (maxval < nums[j]) {
                        maxval = nums[j];
                    }
                }
                arr.push_back(maxval);
            }
    
            return arr;
        }
    };
// using brute force     