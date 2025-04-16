#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> nextSmallerElement(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, -1);  // Default -1 if no smaller element found
    stack<int> s;

    for (int i = n - 1; i >= 0; i--) {
        while (!s.empty() && s.top() >= nums[i]) {
            s.pop();  // Remove elements that are not useful
        }
        if (!s.empty()) {
            result[i] = s.top();  // Store the next smaller element
        }
        s.push(nums[i]);  // Push the current element for future comparisons
    }
    
    return result;
}

int main() {
    vector<int> nums = {4, 8, 5, 2, 25, 3, 12};
    vector<int> res = nextSmallerElement(nums);

    cout << "Next Smaller Elements: ";
    for (int num : res) cout << num << " ";
    return 0;
}
