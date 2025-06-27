#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int> arr , int t){
    int n = arr.size();
    int st = 0, end = n - 1;
    while(st <= end){
        int mid = (st + end) / 2;
        if(t > arr[mid]){
            st = mid + 1;   // Move to the right half
        }
        else if(t < arr[mid]){
            end = mid - 1;  // Move to the left half
        }
        else{
            return mid;     // Found the target
        }
    }
    return -1;  // Target not found
}
int main(){
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};     
    int t = 12;
    int ans = binarySearch(arr, t);
    cout << "Target element index is: " << ans;
    return 0;
}