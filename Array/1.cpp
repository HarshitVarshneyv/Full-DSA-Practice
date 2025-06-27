/* Largest subarray with 0 sum [index-size]
Given an array arr containing both positive and negative integers, the task is to compute the length
of the largest subarray that has a sum of 0.
Examples:
Input: arr[] = [15, -2, 2, -8, 1, 7, 10, 23]
Output: 5
Explanation: The largest subarray with a sum of 0 is [-2, 2, -8, 1, 7].
Input: arr[] = [2, 10, 4]
Output: 0
Explanation: There is no subarray with a sum of 0.
Input: arr[] = [1, 0, -4, 3, 1, 0]
Output: 5
Explanation: The subarray is [0, -4, 3, 1, 0].
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {15, -2, 2, -8, 1, 7};
    unordered_map<int, int> prefix;
    int sum = 0, maxLen = 0;
    prefix[0] = -1;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
        // if (sum == 0) {
        //     maxLen = i + 1;  // if from start to current index sum is 0
        // }
        if (prefix.find(sum) != prefix.end()) {
            maxLen = max(maxLen, i - prefix[sum]);
        } else {
            prefix[sum] = i;
        }
    }
    cout << maxLen;
    return 0;
}
