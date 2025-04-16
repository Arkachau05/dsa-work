#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> previousGreater(vector<int>& nums) {
    stack<int> s;
    vector<int> result(nums.size(), -1);

    for (int i = 0; i < nums.size(); i++) {
        while (!s.empty() && s.top() <= nums[i]) {
            s.pop();
        }
        if (!s.empty()) result[i] = s.top();
        s.push(nums[i]);
    }
    return result;
}

int main() {
    vector<int> nums = {3, 8, 4, 10, 15, 6, 12};
    vector<int> res = previousGreater(nums);

    cout << "Previous Greater Elements: ";
    for (int num : res) cout << num << " ";
    return 0;
}
