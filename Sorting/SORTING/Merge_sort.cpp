#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr , int st,int mid,int end){
     vector<int> temp;
     int i=st,j=mid+1;
     while(i<= mid && j <= end){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);
            i++;
        } else{
            temp.push_back(arr[j]);
            j++;
        }
     }
     while(i <= mid){
        temp.push_back(arr[i]);
        i++;
     }
     while(j <= end){
         temp.push_back(arr[j]);
         j++;
     }
     for(int idx=0;idx<temp.size();idx++){
        arr[idx + st] = temp[idx];
     }
}

void mergeSort(vector<int> &arr , int st,int end){
    if(st < end){
    int mid = st + (end - st) / 2;
    //Left half
    mergeSort(arr,st,mid);
    //Right hlaf
    mergeSort(arr,mid+1,end);

    merge(arr,st,mid,end); 
}
}

int main(){
    vector<int> arr = {12,10,34,54,14,10};
    mergeSort(arr,0,arr.size()-1);

    for(int val : arr){
        cout<<val<<" ";
    }
    return 0;
}