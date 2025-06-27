class Solution {               //T.C=O(log n)
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int st=1,end=n-2;

        while(st <= end){
            int mid=st + (end - st) /2;
            if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid-1] < arr[mid]){      //inc//right
                st=mid+1;
            }
            else{                                //dec//left
                end=mid-1;
            }
        }
        return -1;
    }
};


// //LeatCode implementing this code
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int l = 0, r = arr.size() - 1, mid;
//         while (l < r) {
//             mid = (l + r) / 2;
//             if (arr[mid] < arr[mid + 1])
//                 l = mid + 1;
//             else
//                 r = mid;
//         }
//         return l;
//     }
// };