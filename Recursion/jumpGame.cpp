#include <iostream>
#include <vector>
using namespace std;

bool canJumpFromPosition(vector<int>& nums, int position) {
    // Base case: if the position is at or beyond the last index
    if (position >= nums.size() - 1) {
        return true;
    }

    // Calculate the furthest position we can jump to from the current position
    int furthestJump = min(position + nums[position], static_cast<int>(nums.size() - 1));

    // Try all possible jumps from the current position
    for (int nextPosition = position + 1; nextPosition <= furthestJump; ++nextPosition) {
        if (canJumpFromPosition(nums, nextPosition)) {
            return true; // If any jump leads to the end, return true
        }
    }

    // If no jump leads to the end, return false
    return false;
}

bool canJump(vector<int>& nums) {
    return canJumpFromPosition(nums, 0);
}

int main() {
    vector<int> nums = {2, 0, 1, 0, 4};
    cout << (canJump(nums) ? "true" : "false") << endl;
    return 0;
}
