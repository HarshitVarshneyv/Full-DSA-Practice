#include<iostream>
#include<vector>
using namespace std;

void printSubsets(vector<int> &arr, vector<int> &ans, int i) {
    if (i == arr.size()) { // Base case: When index `i` equals the size of the array
        for (int val : ans) { // Print the current subset stored in `ans`
            cout << val << " ";
        }
        cout << endl; // Print a newline after printing one subset
        return; // End this recursion branch
    }

    // 1. **Include the current element (`arr[i]`) in the subset**
    ans.push_back(arr[i]); // Add the current element to `ans`
    printSubsets(arr, ans, i + 1); // Recur for the next index

    ans.pop_back(); // **Backtrack**: Remove the current element to explore the "exclude" case

    // 2. **Exclude the current element (`arr[i]`) from the subset**
    printSubsets(arr, ans, i + 1); // Recur for the next index
}



int main() {
    vector<int> arr = {1, 2, 3}; // Input array for which subsets are to be generated
    vector<int> ans; // Temporary vector to store a subset during recursion

    printSubsets(arr, ans, 0); // Call the recursive function starting at index 0
    return 0; // Exit the program
}
