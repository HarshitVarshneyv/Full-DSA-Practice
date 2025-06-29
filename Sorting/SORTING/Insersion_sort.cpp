#include<iostream>
using namespace std;

void insertionSort(int arr[],int n){
   for(int i=1;i<n;i++){
    int curr=arr[i];
    int prev=i-1;

    while(prev >= 0 && arr[prev]>curr){
        arr[prev+1] = arr[prev];
        prev--;
    }

    arr[prev + 1]=curr;        //Placing the current element in its correct position.
   }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}}


int main(){
    int arr[]={4,3,2,6,7};
    int n=5;
    insertionSort(arr,n);
    print(arr,n);
    return 0;
}