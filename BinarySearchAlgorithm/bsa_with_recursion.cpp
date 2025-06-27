#include<iostream>
#include<vector>
using namespace std;

int binarySearchRecursive(vector<int> arr, int st, int end, int t) {
    // Base case: if the search space is invalid
    if (st > end) {
        return -1;
    }

    int mid = (st + end) / 2;

    if (t == arr[mid]) {
        return mid;  // Target found
    }
    else if (t > arr[mid]) {
        // Recur to the right half
        return binarySearchRecursive(arr, mid + 1, end, t);
    }
    else {
        // Recur to the left half
        return binarySearchRecursive(arr, st, mid - 1, t);
    }
}

int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};     
    int t = 12;

    // Initial call with the full array
    int ans = binarySearchRecursive(arr, 0, arr.size() - 1, t);
    cout << "Target element index is: " << ans;
    return 0;
}
