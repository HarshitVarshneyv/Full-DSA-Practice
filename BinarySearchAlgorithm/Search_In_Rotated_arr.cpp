#include<iostream>           //O(log n) //Modified bsa
#include<vector>
using namespace  std;

int binarySearch(vector<int> arr , int t){
    int st=0,end=arr.size();
    while(st <=end){
        int mid=st + (end-st)/2;
        if(arr[mid]==t){
            return mid;
        }

        if(arr[st] < arr[mid]){ //left sorted
            if(arr[st] <= t && t <= arr[mid]){
                end=mid-1;
            }
            else{
                st=mid+1;
        }
        }
        else{   //right sorted 
            if(arr[mid] <= t && t<= arr[end]){
                st=mid+1;
            }
            else
            end=mid-1;
          } 
}
 return -1;       
}

int main(){
    vector<int> arr={3,4,5,6,7,0,1,2};
    int t=0;

    int ans = binarySearch(arr,t);
    cout<<"Index is:"<<ans;
    return 0;
}