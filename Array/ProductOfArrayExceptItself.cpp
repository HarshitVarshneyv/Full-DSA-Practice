
// Example 1:

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]


class Solution {                  // This is brute force approach with T.C=O(n^2)
public:                           //Product of array except itself.
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
         vector<int> ans(n,1);
         for(int i=0;i<n;i++){
          //  int product=1;      //Do like this also.
            for(int j=0;j<n;j++){
                if(i != j){
                   // product *= nums[j];
                   ans[i]  *= nums[j];
                }
            }
           // ans[i]=product;
         }
         return ans;
    }
};


//Optimised solution with T.C=O(n);
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        //prefix
       // prefix[0]=1;  //No need to do because vector is declared with all 1
        for(int i=1;i<n;i++){
            prefix[i] = prefix[i-1] * nums[i-1];
        }

       //Suffix
        for(int i=n-2;i>=0;i--){
            suffix[i] = suffix[i+1] * nums[i+1];
        }
 
        //ans
        for(int i=0;i<n;i++){
           ans[i] = prefix[i] * suffix[i];
        }
        return ans;
    }
};