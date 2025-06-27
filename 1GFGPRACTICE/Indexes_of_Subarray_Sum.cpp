#include<iostream>
#include<vector>
using namespace std;

vector<int> indexSubarray(vector<int> arr , int t){
    int n=arr.size();
    bool bl= false;
    vector<int> ans; 

    for(int i=0;i<n;i++){
        int currentSum=arr[i];
        if(currentSum == t){
            ans.push_back(i+1);
            ans.push_back(i+1);
            bl = true;
            break;
        }
        else{
        for(int j=i+1;j<n;j++){
            currentSum +=arr[j];
            if(currentSum == t){
              ans.push_back(i+1);
              ans.push_back(j+1);
                bl = true;
                break;
            }
            }
             
            if(bl) break;
            }
    }
    if(bl) return ans;
    return {-1};
}

int main(){

    // vector<int> arr={1,2,3,7,5};
    // int t=12;
    vector<int> arr={7,2,1};
    int t=2;

     vector<int> ans=indexSubarray(arr,t);
     cout<<ans[0]<<" "<<ans[1];
    return 0;
}



//GFG

// class Solution {
//   public:
//     vector<int> subarraySum(vector<int> &arr, int t) {
//         int n=arr.size();
//         vector<int> ans;
//        for(int i=0;i<n;i++){
//            int currSum=0;    
//            if(arr[i] == t){
//                ans.push_back(i+1);
//                ans.push_back(i+1);
//                return ans;
//            }
//            currSum +=arr[i];
          
//            for(int j=i+1;j<n;j++){
//                currSum +=arr[j];
//                if(currSum == t){
//                     ans.push_back(i+1);
//                     ans.push_back(j+1);
//                      return ans;
//                }
//            }
//        }
//        return {-1};
//     }
// };

