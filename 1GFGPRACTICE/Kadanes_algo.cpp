#include<iostream>
using namespace std;

int main(){
       int n=7;
       int arr[]={3,-4,5,4,-1,7,-8};
       int maxSum=INT16_MIN,currentSum=0;  //if we take 0 in max sum so answe is correct but for array [-1] it give 0 output which is incorrect

       for(int i=0;i<n;i++){
           currentSum +=arr[i];
           maxSum=max(currentSum,maxSum);
           if(currentSum<0){
            currentSum=0;
           }
       }
       cout<<maxSum;
    return 0;
}