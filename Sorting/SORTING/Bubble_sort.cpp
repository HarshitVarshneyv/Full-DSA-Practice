#include<iostream>                           // T.C=O(n^2)
using namespace std;

void bubbleSort(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        bool isSwap=false;                       //This is done to left extra checks which is performed in BS.
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwap=true;   } }
        if(!isSwap){     //This means array is already sorted 
             return;
        }   }  }

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}}

int main(){
    int arr[]={4,1,5,2,3};
    int n=5;
    bubbleSort(arr,n);
    print(arr,n);
    return 0;
}

