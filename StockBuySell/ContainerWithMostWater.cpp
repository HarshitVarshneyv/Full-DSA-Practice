//Here we are using Two pointer approach.
//T.C=o(n);

// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7].
//  In this case, the max area of water (blue section) the container can contain is 49.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()- 1,maxWater=0;
        while(lp<rp){
           int w=rp - lp;
           int ht=min(height[lp] , height[rp]);
           int currentWater=w*ht;
           maxWater=max(maxWater,currentWater);

           height[lp] < height[rp] ? lp++ : rp-- ;
        }
        return maxWater;
    }
};