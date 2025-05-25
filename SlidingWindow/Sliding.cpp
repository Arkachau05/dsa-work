#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2, 1, 5, 1, 3, 2};
    int k = 3;
    int n = nums.size();

    int windowSum = 0, maxSum = 0;

    // First window
    for (int i = 0; i < k; i++) {
        windowSum += nums[i];
    }
    maxSum = windowSum;

    // Slide the window
    for (int i = k; i < n; i++) {
        windowSum += nums[i] - nums[i - k]; // slide
        maxSum = max(maxSum, windowSum);
    }

    cout << "Maximum sum of subarray of size " << k << " is: " << maxSum << endl;

    return 0;
}
// This code calculates the maximum sum of a subarray of size k using the sliding window technique. It first calculates the sum of the first k elements, then slides the window across the array, updating the sum by adding the next element and removing the first element of the previous window. The maximum sum is updated accordingly.
// The time complexity is O(n) and the space complexity is O(1).