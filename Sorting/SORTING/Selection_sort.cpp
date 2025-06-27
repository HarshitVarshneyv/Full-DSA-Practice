#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){                      
        int smallestIdx=i;                   
        for(int j=i+1;j<n;j++){                 
            if(arr[j]<arr[smallestIdx]){     
                smallestIdx=j;               
            }
        }
        swap(arr[i],arr[smallestIdx]);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}}


int main(){
    int arr[]={4,3,2,6,7};
    int n=5;
    selectionSort(arr,n);
    print(arr,n);
    return 0;
}