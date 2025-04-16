#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> previousSmaller(vector<int>& nums) {
    stack<int> s;
    vector<int> result(nums.size(), -1);

    for (int i = 0; i < nums.size(); i++) {
        while (!s.empty() && s.top() >= nums[i]) {
            s.pop();
        }
        if (!s.empty()) result[i] = s.top();
        s.push(nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums = {10, 5, 3, 15, 20, 4, 12};
    vector<int> res = previousSmaller(nums);

    cout << "Previous Smaller Elements: ";
    for (int num : res) cout << num << " ";
    return 0;
}
